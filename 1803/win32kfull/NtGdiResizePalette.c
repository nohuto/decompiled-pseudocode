/*
 * XREFs of NtGdiResizePalette @ 0x1C0287F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00092F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0009328 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00DCEC8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0139274 (--1MDCOBJA@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C013CDFC (--1MDCOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C028AD80 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // ecx
  unsigned int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  HDC v13; // rdi
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  signed __int32 v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rdi
  HDC v19; // rbx
  __int64 v20; // [rsp+50h] [rbp-68h] BYREF
  __int64 v21; // [rsp+58h] [rbp-60h] BYREF
  int v22; // [rsp+60h] [rbp-58h]
  _QWORD v23[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v24[2]; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v25[6]; // [rsp+88h] [rbp-30h] BYREF
  struct PALETTE *v26; // [rsp+D8h] [rbp+20h] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v26, a1);
  if ( v26 )
  {
    if ( v26 != ppalDefault )
    {
      v4 = *((_DWORD *)v26 + 6);
      if ( (v4 & 0x100) != 0 )
      {
        if ( (v4 & 0x800) != 0 && a2 != 256 )
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v26);
          return 0LL;
        }
        v22 = 0;
        v21 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v21, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
        {
          v20 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          v6 = *((_DWORD *)v26 + 7);
          if ( v6 >= *(_DWORD *)(v21 + 28) )
            v6 = *(_DWORD *)(v21 + 28);
          memmove(*(void **)(v21 + 112), *((const void **)v26 + 14), 4LL * v6);
          *(_DWORD *)(v21 + 24) = *((_DWORD *)v26 + 6);
          *(_QWORD *)(v21 + 40) = *((_QWORD *)v26 + 5);
          *(_QWORD *)(v21 + 48) = *((_QWORD *)v26 + 6);
          *(_DWORD *)(v21 + 56) = *((_DWORD *)v26 + 14);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v21);
          GreAcquireHmgrSemaphore(v8, v7, v9, v10);
          v13 = *(HDC *)(v21 + 40);
          while ( v13 )
          {
            MDCOBJ::MDCOBJ((MDCOBJ *)v23, v13);
            if ( !v23[0] )
            {
              MDCOBJ::~MDCOBJ((MDCOBJ *)v23);
              break;
            }
            v13 = *(HDC *)(v23[0] + 1392LL);
            XDCOBJ::RestoreAttributes((XDCOBJ *)v23);
            v23[0] = 0LL;
            MDCOBJ::~MDCOBJ((MDCOBJ *)v23);
          }
          if ( !v13 )
          {
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v26);
            v16 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
            *((_DWORD *)v26 + 8) = v16;
            v17 = *((_QWORD *)v26 + 15);
            if ( (struct PALETTE *)v17 != v26 )
              *(_DWORD *)(v17 + 32) = v16;
            v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v21, &v26, v14, v15);
            if ( v3 )
            {
              v12 = v21;
              v13 = *(HDC *)(v21 + 40);
              while ( v13 )
              {
                MDCOBJA::MDCOBJA((MDCOBJA *)v24, v13);
                v18 = v24[0];
                *(_QWORD *)(v24[0] + 96LL) = v26;
                *(_DWORD *)(*(_QWORD *)(v18 + 80) + 8LL) |= 0xFu;
                v13 = *(HDC *)(v18 + 1392);
                MDCOBJA::~MDCOBJA((MDCOBJA *)v24);
              }
            }
          }
          v19 = *(HDC *)(v21 + 40);
          while ( v19 != v13 )
          {
            MDCOBJ::MDCOBJ((MDCOBJ *)v25, v19);
            _InterlockedDecrement((volatile signed __int32 *)(v25[0] + 12LL));
            v19 = *(HDC *)(v25[0] + 1392LL);
            MDCOBJ::~MDCOBJ((MDCOBJ *)v25);
          }
          GreReleaseHmgrSemaphore(v12, v11);
          SEMOBJ::vUnlock((SEMOBJ *)&v20);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v21);
      }
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v26);
  return v3;
}
