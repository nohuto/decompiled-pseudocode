/*
 * XREFs of ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C000D438
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C00308F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBindFlipPhysicalAddress(
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v4; // r10d
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  char *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v4 = *((_DWORD *)a1 + 1);
  v5 = a2;
  v6 = a3;
  v7 = (unsigned __int64)(a2 + v4 * a3) << 6;
  v8 = (char *)a1 + v4 * ((8 * *((_DWORD *)a1 + 2) + 191) & 0xFFFFFFF8);
  v9 = *(_QWORD *)&v8[v7 + 48];
  *(_QWORD *)&v8[v7 + 40] = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 32LL);
  LODWORD(v8) = *((_DWORD *)a1 + 1);
  v10 = (unsigned int)v8 * ((8 * *((_DWORD *)a1 + 2) + 191) & 0xFFFFFFF8);
  v11 = (unsigned __int64)(unsigned int)(v5 + v6 * (_DWORD)v8) << 6;
  *(_WORD *)((char *)a1 + v10 + v11 + 32) = *(_WORD *)(*(_QWORD *)(v9 + 96) + 6LL);
  v12 = *(unsigned int *)(*(_QWORD *)(v9 + 96) + 12LL);
  if ( !(_DWORD)v12 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v13[7] = 0LL;
    v13[3] = 281LL;
    v13[4] = 0x4000LL;
    v13[5] = v5;
    v13[6] = v6;
    WdLogEvent5_WdCriticalError(v13);
    __debugbreak();
    JUMPOUT(0x1C001FC05LL);
  }
}
