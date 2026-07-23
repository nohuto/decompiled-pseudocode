/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x18003541C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     GetOverlayFilePath @ 0x180032BEC (GetOverlayFilePath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180035530 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(
        __m128i *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        __int64 a4,
        char a5,
        char a6,
        void *a7)
{
  __m128i v7; // xmm6
  WCHAR *v10; // rbx
  unsigned int MUIRedirectedFilePathInternal; // edi
  __int64 v13; // xmm0_8
  NTSTATUS OverlayFilePath; // eax
  WCHAR *Heap; // rax
  int v16; // eax
  unsigned int v17; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v18; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING Source_8; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE BaseAddress[528]; // [rsp+68h] [rbp-A0h] BYREF

  v7 = *a1;
  memset(BaseAddress, 0, 0x208uLL);
  v17 = 520;
  v10 = (WCHAR *)BaseAddress;
  if ( !a6 )
    goto LABEL_2;
  v13 = _mm_srli_si128(v7, 8).m128i_u64[0];
  OverlayFilePath = GetOverlayFilePath(v13, a2, (__int64)&v17, (__int64)BaseAddress);
  if ( OverlayFilePath == -1073741789 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
    v10 = Heap;
    if ( !Heap )
    {
LABEL_2:
      Source_8 = (UNICODE_STRING)v7;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source_8, a2, a3, a5, a7);
      goto LABEL_3;
    }
    OverlayFilePath = GetOverlayFilePath(v13, a2, (__int64)&v17, (__int64)Heap);
  }
  if ( OverlayFilePath < 0 )
    goto LABEL_2;
  v18 = (UNICODE_STRING)v7;
  v16 = RtlpGetMUIRedirectedFilePathInternal(&v18, v10, a3, a5, a7);
  MUIRedirectedFilePathInternal = v16;
  if ( v16 < 0 )
    goto LABEL_2;
LABEL_3:
  if ( v10 != (WCHAR *)BaseAddress && v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return MUIRedirectedFilePathInternal;
}
