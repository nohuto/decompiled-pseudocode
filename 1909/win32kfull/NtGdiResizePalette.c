/*
 * XREFs of NtGdiResizePalette @ 0x1C02B06A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00AD71C (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00CD178 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00CD28C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00CD2C0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AFCB4 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02B5238 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // eax
  HDC v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  signed __int32 v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  HDC v16; // rbx
  __int64 v18; // [rsp+50h] [rbp+7h] BYREF
  int v19; // [rsp+58h] [rbp+Fh]
  _QWORD v20[2]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp+27h] BYREF
  __int64 *v22[4]; // [rsp+80h] [rbp+37h] BYREF
  struct PALETTE *v23; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( a2 - 1 <= 0x3FF )
  {
    v3 = 0;
    v4 = 0;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v23, a1);
    if ( v23 )
    {
      if ( v23 != ppalDefault )
      {
        v5 = *((_DWORD *)v23 + 6);
        if ( (v5 & 0x100) != 0 )
        {
          if ( (v5 & 0x800) != 0 && a2 != 256 )
            goto LABEL_28;
          v19 = 0;
          v18 = 0LL;
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
          {
            v24 = ghsemPalette;
            GreAcquireSemaphore(ghsemPalette);
            v6 = *((unsigned int *)v23 + 7);
            v7 = *(_DWORD *)(v18 + 28);
            if ( (unsigned int)v6 >= v7 )
              v6 = v7;
            memmove(*(void **)(v18 + 112), *((const void **)v23 + 14), 4 * v6);
            *(_DWORD *)(v18 + 24) = *((_DWORD *)v23 + 6);
            *(_QWORD *)(v18 + 40) = *((_QWORD *)v23 + 5);
            *(_QWORD *)(v18 + 48) = *((_QWORD *)v23 + 6);
            *(_DWORD *)(v18 + 56) = *((_DWORD *)v23 + 14);
            XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v18);
            GreAcquireHmgrSemaphore();
            v8 = *(HDC *)(v18 + 40);
            while ( v8 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v20, v8);
              if ( !v20[0] )
                goto LABEL_21;
              v8 = *(HDC *)(v20[0] + 984LL);
              XDCOBJ::RestoreAttributes((XDCOBJ *)v20);
              v20[0] = 0LL;
            }
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v23);
            v13 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
            *((_DWORD *)v23 + 8) = v13;
            v14 = *((_QWORD *)v23 + 15);
            if ( (struct PALETTE *)v14 != v23 )
              *(_DWORD *)(v14 + 32) = v13;
            v4 = XEPALOBJ::bSwap((XEPALOBJ *)&v18, &v23, v11, v12);
            if ( v4 )
            {
              v15 = v18;
              v8 = *(HDC *)(v18 + 40);
              if ( !v8 )
                goto LABEL_22;
              do
              {
                MDCOBJA::MDCOBJA((MDCOBJA *)v22, v8);
                v10 = v22[0];
                if ( !v22[0] )
                  break;
                v22[0][11] = (__int64)v23;
                *((_DWORD *)v10 + 79) |= 0xFu;
                v8 = (HDC)v10[123];
                XDCOBJ::vAltUnlockFast(v22);
              }
              while ( v8 );
            }
LABEL_21:
            v15 = v18;
LABEL_22:
            v16 = *(HDC *)(v15 + 40);
            while ( v16 != v8 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v21, v16);
              _InterlockedDecrement((volatile signed __int32 *)(v21[0] + 12LL));
              v16 = *(HDC *)(v21[0] + 984LL);
              XDCOBJ::vUnlockFast((XDCOBJ *)v21);
            }
            GreReleaseHmgrSemaphore(v10, v9);
            SEMOBJ::vUnlock((SEMOBJ *)&v24);
          }
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
        }
      }
    }
    v3 = v4;
LABEL_28:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
    return v3;
  }
  return 0LL;
}
