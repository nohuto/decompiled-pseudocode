/*
 * XREFs of NtGdiGetFontFileData @ 0x1C0289C20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0106918 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0114610 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C01394F8 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C0277A38 (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall NtGdiGetFontFileData(unsigned int a1, unsigned int a2, size_t *a3, char *a4, size_t Size)
{
  __int64 v6; // rsi
  struct PFF *PFFFromId; // rdi
  ULONG v9; // ebx
  ULONG_PTR v11; // rsi
  size_t v12; // r12
  NTSTATUS v13; // r14d
  char *v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+28h] [rbp-50h] BYREF
  size_t v17; // [rsp+30h] [rbp-48h]
  ULONG_PTR v18; // [rsp+38h] [rbp-40h]
  _QWORD v19[2]; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+50h] [rbp-28h]

  v6 = a2;
  if ( ((unsigned __int8)a3 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = *a3;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v19);
  v15 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  PFFFromId = GetPFFFromId(gpPFTPublic, a1, 0LL);
  v9 = 0;
  if ( !PFFFromId && gpPFTPrivate )
    PFFFromId = GetPFFFromId(gpPFTPrivate, a1, 0LL);
  if ( !PFFFromId )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v15);
LABEL_8:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v19);
    return 87LL;
  }
  v19[0] = PFFFromId;
  ++*((_DWORD *)PFFFromId + 17);
  v20 = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  if ( (unsigned int)v6 >= *((_DWORD *)PFFFromId + 9) )
    goto LABEL_8;
  _mm_lfence();
  v11 = *(_QWORD *)(*((_QWORD *)PFFFromId + 25) + 8 * v6);
  v18 = v11;
  v12 = v17;
  if ( v17 + Size < v17 || *(unsigned int *)(v11 + 24) < v17 + Size )
    goto LABEL_8;
  if ( (unsigned int)EngMapFontFileFDInternal((struct _FILEVIEW *)v11, 0LL, 0LL, 0) )
  {
    v13 = MapFontFileInKernel(*(PVOID *)(v11 + 32), &MappedBase);
    if ( v13 >= 0 )
    {
      v14 = (char *)MappedBase + v12 + 16;
      if ( (*((_DWORD *)PFFFromId + 13) & 0x10) == 0 )
        v14 = (char *)MappedBase + v12;
      if ( (unsigned __int64)&a4[Size] > MmUserProbeAddress || &a4[Size] <= a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v14, Size);
      MmUnmapViewInSessionSpace(MappedBase);
      EngUnmapFontFileFD(v11);
    }
    else
    {
      EngUnmapFontFileFD(v11);
      v9 = RtlNtStatusToDosError(v13);
    }
  }
  else
  {
    v9 = 87;
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v19);
  return v9;
}
