/*
 * XREFs of ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x18007A1A0
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18007E2A4 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampAttributesRequest(HidLampArrayDevice *this, int a2)
{
  __int64 v2; // rbp
  unsigned __int8 *v5; // rbx
  ULONG v6; // r14d
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rdi
  int v9; // esi
  int inserted; // eax
  const struct std::nothrow_t *v11; // rdx
  const struct std::nothrow_t *v12; // rdx
  const struct std::nothrow_t *v14; // rdx
  signed int LastError; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned int v17; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int8 *ReportBuffer; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 74);
  v5 = 0LL;
  v6 = 0;
  ReportBuffer = 0LL;
  v7 = (unsigned __int8 *)operator new[](*(unsigned int *)(v2 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
      (const char *)0x8007000ELL);
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v9);
    if ( v5 )
      operator delete(v5, v12);
    return (unsigned int)v9;
  }
  memset_0(v7, 0, *(unsigned int *)(v2 + 20));
  *v8 = *(_BYTE *)(v2 + 16);
  inserted = HidChannelValueInfo::InsertValue((HidChannelValueInfo *)(v2 + 24), a2, *(unsigned int *)(v2 + 20), v8);
  v9 = inserted;
  if ( inserted >= 0 )
  {
    v6 = *(_DWORD *)(v2 + 20);
    v5 = v8;
    ReportBuffer = v8;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequestreportparser.cpp",
      (const char *)(unsigned int)inserted);
    operator delete(v8, v11);
  }
  if ( v9 < 0 )
    goto LABEL_7;
  if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v6) )
  {
    if ( ReportBuffer )
      operator delete(ReportBuffer, v14);
    return 0LL;
  }
  else
  {
    LastError = GetLastError();
    v17 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v17 = LastError;
    if ( ReportBuffer )
      operator delete(ReportBuffer, v16);
    return v17;
  }
}
