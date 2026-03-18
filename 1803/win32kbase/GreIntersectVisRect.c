/*
 * XREFs of GreIntersectVisRect @ 0x1C00D9BA0
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00CB700 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0020DF0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0021C40 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0022C20 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0022CF8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002BC10 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002FF24 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // edi
  struct OBJECT *v9; // rsi
  unsigned int v10; // edx
  struct OBJECT *v11; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v14; // [rsp+28h] [rbp-71h] BYREF
  __int64 v15; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+38h] [rbp-61h]
  __int64 v17; // [rsp+40h] [rbp-59h] BYREF
  int v18; // [rsp+48h] [rbp-51h]
  struct _RECTL v19; // [rsp+50h] [rbp-49h] BYREF
  __int64 v20; // [rsp+60h] [rbp-39h] BYREF
  struct OBJECT *v21[2]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v22[80]; // [rsp+78h] [rbp-21h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v21, a1);
  v9 = v21[0];
  if ( v21[0] )
  {
    v20 = *((_QWORD *)v21[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v22, (struct PDEVOBJ *)&v20);
    if ( (v22[24] & 1) != 0 )
    {
      v14 = *((_QWORD *)v9 + 191);
      v19.left = a2;
      v19.top = a3;
      v19.right = a4;
      v19.bottom = a5;
      v18 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
      v10 = *(_DWORD *)(v14 + 80);
      v16 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, v10);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
      if ( v17 && v15 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v17, &v19);
        RGNOBJ::vCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v14);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v15, 1) )
        {
          *((_QWORD *)v9 + 191) = v14;
          v11 = v21[0];
          *(_DWORD *)(v14 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          *((_DWORD *)v11 + 9) |= 0x10u;
          EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v11);
          v5 = 1;
          *((_BYTE *)EntryFromObject + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v21);
  }
  return v5;
}
