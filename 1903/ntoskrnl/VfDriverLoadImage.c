/*
 * XREFs of VfDriverLoadImage @ 0x14095FF80
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 *     VfInitBootDriversLoaded @ 0x1409EF070 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x1409EF158 (VfDriverLoadBootDrivers.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     VfTargetDriversAdd @ 0x140154538 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     VfNotifyVerifierExtensions @ 0x14096672C (VfNotifyVerifierExtensions.c)
 *     ViXdvDriverLoadImage @ 0x140966AD4 (ViXdvDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 */

char __fastcall VfDriverLoadImage(__int64 a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  UNICODE_STRING v12; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v12.Length = 2097182LL;
  v12.Buffer = L"VerifierExt.sys";
  LOBYTE(v8) = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &v12, 1u);
  if ( (_BYTE)v8 == 1 )
  {
    if ( !ViDriverXDVBase )
    {
      ViDriverXDVBase = *(_QWORD *)(a1 + 48);
      ViDriverXDVImageSize = *(_DWORD *)(a1 + 64);
    }
    LODWORD(v8) = (unsigned __int8)ViXdvDriverLoadImage(a1);
    XdvEnabled = v8;
    if ( (_BYTE)v8 )
      LOBYTE(v8) = VfNotifyVerifierExtensions(0LL, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( v10 )
    {
      v8 = MiSectionControlArea(v10);
      LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)v8 + 15LL) >> 4;
    }
    else
    {
      LOBYTE(v9) = 12;
    }
    if ( ViVerifierDriverAddedThunkListHead )
    {
      LOBYTE(v8) = VfSuspectDriversLoadCallback(a1, a2, v9, a3, a4);
    }
    else if ( !a4 )
    {
      LOBYTE(v8) = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v9, 0LL);
    }
  }
  return v8;
}
