/*
 * XREFs of ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0078330
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0077DC8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C00782CC (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
        DirectComposition::CBatchSharedMemoryPool *this,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
    goto LABEL_4;
  v8 = *((_QWORD *)this + 2);
  v11 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v4 = MmMapViewOfSection(*((_QWORD *)this + 3), *(_QWORD *)(v8 + 16), &v12, 0LL, 4096LL, &v11, &v13, 2, 0x400000, 2);
  if ( v4 >= 0 )
  {
    v9 = v12;
    *((_QWORD *)this + 6) = v12;
    v3 = v9;
LABEL_4:
    *a3 = (void *)(v3 + a2);
  }
  return (unsigned int)v4;
}
