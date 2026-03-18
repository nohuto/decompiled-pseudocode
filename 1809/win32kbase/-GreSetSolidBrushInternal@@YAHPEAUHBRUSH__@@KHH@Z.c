/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0042EB8
 * Callers:
 *     SetSysColor @ 0x1C0042D4C (SetSysColor.c)
 *     hCreateSolidBrushInternal @ 0x1C0043620 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C00F6100 (GreSetSolidBrush.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C001FB50 (HmgSafeNextObjt.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00229B0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0043320 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0043354 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005D960 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r14d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  struct OBJECT *v11; // rbx
  unsigned int v12; // eax
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  int v19; // ecx
  __int64 v20; // rcx
  __int64 Objt; // rax
  unsigned int v22; // [rsp+30h] [rbp-58h]
  _BYTE v23[8]; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+40h] [rbp-48h]
  struct OBJECT *v25[6]; // [rsp+50h] [rbp-38h] BYREF

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, a1);
  v11 = v25[0];
  if ( v25[0] )
  {
    v12 = *((_DWORD *)v25[0] + 10);
    if ( (v12 & 0x10) != 0 && ((v12 & 0x200) == 0 || a4) && ((v12 >> 10) & 1) == a3 )
    {
      v13 = 0LL;
      GreAcquireHmgrSemaphore(v9, v8, v10);
      if ( *((_DWORD *)v11 + 2) == 1 || a4 )
      {
        *((_DWORD *)v11 + 19) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v23, v11, 0, 0, 0);
        if ( v24 )
        {
          if ( *((_DWORD *)v11 + 2) == 1 )
          {
            if ( *((_DWORD *)v11 + 25) != -1 )
            {
              v19 = *((_DWORD *)v11 + 10);
              if ( v19 >= 0 )
              {
                v13 = (volatile signed __int32 *)*((_QWORD *)v11 + 15);
                v22 = ((unsigned int)v19 >> 30) & 1;
              }
            }
            *((_DWORD *)v11 + 24) = 0;
            *((_DWORD *)v11 + 25) = -1;
            if ( a4 )
            {
              *((_DWORD *)v11 + 10) &= ~0x80000000;
            }
            else
            {
              *((_DWORD *)v11 + 20) = 7;
              *((_DWORD *)v11 + 10) = 20;
            }
          }
          else
          {
            *((_DWORD *)v11 + 26) = -1;
            LODWORD(v20) = 0;
            *((_DWORD *)v11 + 27) = -1;
            *((_DWORD *)v11 + 28) = -1;
            while ( 1 )
            {
              Objt = HmgSafeNextObjt(v20, 1);
              if ( !Objt )
                break;
              if ( *(struct OBJECT **)(Objt + 1320) == v11 )
                *(_DWORD *)(Objt + 316) |= 1u;
              v20 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v23);
        }
        v17 = v24 == 0;
        *((_DWORD *)v11 + 11) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        if ( !v17 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v23);
      }
      GreReleaseHmgrSemaphore(v15, v14, v16);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v13, v22);
        *((_QWORD *)v11 + 15) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
  return v7;
}
