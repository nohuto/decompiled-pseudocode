/*
 * XREFs of GreIntersectVisRect @ 0x1C0107810
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00FF1B0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C001FAB0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0020F60 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C002539C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007D424 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A0594 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     DC::AcquireDcVisRgnExclusive @ 0x1C00AC264 (DC--AcquireDcVisRgnExclusive.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // r12d
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  struct _RECTL v11; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h]
  DC *v17[6]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v18[112]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v17, a1);
  if ( v17[0] )
  {
    v14 = *((_QWORD *)v17[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v14);
    DC::AcquireDcVisRgnExclusive((__int64)v17[0], (__int64)&v15);
    if ( (v18[24] & 1) != 0 )
    {
      v11.left = a2;
      v11.top = a3;
      v11.right = a4;
      v10 = *((_QWORD *)v17[0] + 143);
      v11.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v12, *(_DWORD *)(v10 + 80));
      if ( v13[0] && v12[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v13, &v11);
        RGNOBJ::vCopy((RGNOBJ *)v12, (struct RGNOBJ *)&v10);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v10, (struct RGNOBJ *)v13, (struct RGNOBJ *)v12, 1) )
        {
          *((_QWORD *)v17[0] + 143) = v10;
          *(_DWORD *)(v10 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          DC::vReleaseRao(v17[0]);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
    }
    if ( (_BYTE)v16 )
      CPushLock::ReleaseLock((CPushLock *)(v15 + 1112));
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
  }
  DCOBJA::~DCOBJA(v17);
  return v5;
}
