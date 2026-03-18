/*
 * XREFs of ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0108D5C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C001CF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00AA460 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall CreateSurfacePal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v4; // edx
  const unsigned int *v6; // r9
  unsigned int v8; // r8d
  unsigned int v10; // esi
  unsigned int v11; // r8d
  struct _SLIST_ENTRY *v12; // rbx
  int v13; // eax
  unsigned int v14; // r10d
  __int64 v15; // r9
  struct _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  struct _SLIST_ENTRY *v25; // [rsp+50h] [rbp-28h] BYREF
  int v26; // [rsp+58h] [rbp-20h]
  int v27; // [rsp+88h] [rbp+10h]
  int v28; // [rsp+88h] [rbp+10h]

  v4 = *(_DWORD *)(a1 + 24);
  v6 = *(const unsigned int **)(a1 + 112);
  v8 = *(_DWORD *)(a1 + 28);
  v26 = 0;
  v25 = 0LL;
  v10 = PALMEMOBJ::bCreatePalette(&v25, v4 & 0x1F, v8, v6, 0, 0, 0, 0x800u, 1);
  if ( v10 )
  {
    v11 = a3 >> 1;
    if ( a3 >> 1 > a4 || (v12 = v25, a4 > *((_DWORD *)&v25[1].Next + 3)) )
    {
      v10 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 24);
      v14 = 0;
      *(_DWORD *)(a1 + 60) = a3;
      v10 = 1;
      *(_DWORD *)(a1 + 24) = v13 & 0xFFFFF5FF | 0x800;
      *((_DWORD *)&v12[3].Next + 3) = a3;
      if ( v11 )
      {
        v15 = 0LL;
        do
        {
          Next = v12[7].Next;
          v27 = *(_DWORD *)((char *)&Next->Next + v15);
          HIBYTE(v27) = 48;
          *(_DWORD *)((char *)&Next->Next + v15) = v27;
          v17 = v12[7].Next;
          v15 += 4LL;
          v18 = v14 - v11;
          ++v14;
          v19 = a4 + v18;
          v28 = *((_DWORD *)&v17->Next + v19);
          HIBYTE(v28) = 48;
          *((_DWORD *)&v17->Next + (unsigned int)v19) = v28;
        }
        while ( v14 < v11 );
      }
      v20 = *((_DWORD *)&v12[1].Next + 3);
      if ( v20 >= *(_DWORD *)(a1 + 28) )
        v20 = *(_DWORD *)(a1 + 28);
      memmove(*(void **)(a1 + 112), v12[7].Next, 4LL * v20);
      v21 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 48) = v12;
      if ( v21 == a1 )
        v22 = *(_DWORD *)(a1 + 32);
      else
        v22 = *(_DWORD *)(v21 + 32);
      LODWORD(v12[2].Next) = v22;
      v23 = *((_QWORD *)&v12[7].Next + 1);
      if ( (struct _SLIST_ENTRY *)v23 != v12 )
        *(_DWORD *)(v23 + 32) = v22;
      v25 = 0LL;
      v26 = 1;
    }
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v25);
  return v10;
}
