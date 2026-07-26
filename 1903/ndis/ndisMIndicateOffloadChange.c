/*
 * XREFs of ndisMIndicateOffloadChange @ 0x1C0021CFC
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

char __fastcall ndisMIndicateOffloadChange(__int64 a1, int a2, _BYTE *a3, unsigned int a4)
{
  char v8; // bl
  KIRQL v9; // r12
  _BYTE *v10; // rcx
  size_t v11; // rbx
  int v12; // ebp
  unsigned __int16 v13; // ax
  char v15; // r14
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // eax

  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v10 = *(_BYTE **)(a1 + 4096);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( v10 && a4 >= 0x70 && *a3 == 0xA7 && *((_WORD *)a3 + 1) >= 0x70u && a3[1] )
  {
    v11 = 216LL;
    v12 = (*(_BYTE *)(a1 + 4952) & 2) != 0 ? -7 : -1;
    if ( a2 == 1073872902 )
    {
      memset(v10 + 8, 0, 0xD8uLL);
      v13 = *((_WORD *)a3 + 1);
      if ( v13 < 0xD8u )
        v11 = v13;
      memmove((void *)(*(_QWORD *)(a1 + 4096) + 8LL), a3, v11);
      *(_DWORD *)(*(_QWORD *)(a1 + 4096) + 116LL) &= v12;
    }
    else
    {
      v15 = v10[764] & 1;
      memset(v10 + 656, 0, 0xD8uLL);
      v16 = *((_WORD *)a3 + 1);
      if ( v16 < 0xD8u )
        v11 = v16;
      memmove((void *)(*(_QWORD *)(a1 + 4096) + 656LL), a3, v11);
      v17 = *(_QWORD *)(a1 + 4096);
      v18 = *(_DWORD *)(v17 + 764);
      if ( v15 )
        v19 = v18 | 1;
      else
        v19 = v18 & 0xFFFFFFFE;
      *(_DWORD *)(v17 + 764) = v19;
      *(_DWORD *)(*(_QWORD *)(a1 + 4096) + 764LL) &= v12;
    }
    v8 = 1;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
  return v8;
}
