/*
 * XREFs of _lambda_823040ae01d5059dfb369ac1bb9874b3_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC774
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FD4BC (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall lambda_823040ae01d5059dfb369ac1bb9874b3_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        __int64 a1,
        LPCWCH **a2)
{
  char v4; // di
  LPCWCH *v5; // rbx
  LPCWCH *v7; // rdx

  if ( !**(_BYTE **)a1 )
  {
    v7 = *a2;
    return *((_DWORD *)v7 + 2) == **(_DWORD **)(a1 + 24) && *((_DWORD *)v7 + 3) == **(_DWORD **)(a1 + 32);
  }
  v4 = 1;
  if ( CompareStringOrdinal(**a2, -1, **(LPCWCH **)(a1 + 8), -1, 1) != 2 )
    return 0;
  v5 = *a2;
  if ( *((_DWORD *)v5 + 4) != (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 16) + 48LL))(**(_QWORD **)(a1 + 16)) )
    return 0;
  return v4;
}
