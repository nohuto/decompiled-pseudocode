/*
 * XREFs of GreIntersectVisRect @ 0x1C0131B00
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0128BD0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00142F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00150FC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0015510 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0015690 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0015D04 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001CE80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0025080 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0026DA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003AE70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00B1414 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // r13d
  struct OBJECT *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // edx
  struct OBJECT *v12; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+28h] [rbp-71h] BYREF
  __int64 v17; // [rsp+30h] [rbp-69h] BYREF
  int v18; // [rsp+38h] [rbp-61h]
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  int v20; // [rsp+48h] [rbp-51h]
  struct _RECTL v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+60h] [rbp-39h] BYREF
  struct OBJECT *v23[2]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v24[32]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v25[2]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v26; // [rsp+A8h] [rbp+Fh]

  v8 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v23, a1);
  v9 = v23[0];
  if ( v23[0] )
  {
    v22 = *((_QWORD *)v23[0] + 6);
    v25[0] = 0LL;
    v25[1] = 0LL;
    v26 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v22);
    if ( (v24[24] & 1) != 0 )
    {
      v10 = *((_QWORD *)v9 + 140);
      v20 = 0;
      v16 = v10;
      v21.left = a2;
      v21.top = a3;
      v21.right = a4;
      v21.bottom = a5;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
      v11 = *(_DWORD *)(v10 + 80);
      v18 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, v11);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
      if ( v19 && v17 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v19, &v21);
        RGNOBJ::vCopy((RGNOBJ *)&v17, (struct RGNOBJ *)&v16);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v17, 1) )
        {
          *((_QWORD *)v9 + 140) = v16;
          v12 = v23[0];
          *(_DWORD *)(v16 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          *((_DWORD *)v12 + 9) |= 0x10u;
          EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v12);
          v8 = 1;
          *((_BYTE *)EntryFromObject + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
    v14 = v25[0];
    if ( v25[0] )
    {
      if ( (_BYTE)v26 )
      {
        *(_DWORD *)(v25[0] + 40LL) &= ~2u;
        v14 = v25[0];
        LOBYTE(v26) = 0;
      }
      if ( v14 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v25);
    }
    XDCOBJ::vAltUnlockFast((__int64 **)v23);
  }
  return v8;
}
