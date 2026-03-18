/*
 * XREFs of GetNameFromPath @ 0x1C0063128
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C001B6E4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     FxLibraryCommonRegisterClient @ 0x1C0043B7C (FxLibraryCommonRegisterClient.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0044818 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     GetImageName @ 0x1C006227C (GetImageName.c)
 * Callees:
 *     <none>
 */

void __fastcall GetNameFromPath(const _UNICODE_STRING *Path, _UNICODE_STRING *Name)
{
  __int64 Length; // rcx
  char v4; // r9
  wchar_t *v5; // rax
  wchar_t *v6; // rax
  unsigned __int16 v7; // cx

  if ( Path->Length >= 2u )
  {
    Length = Path->Length;
    v4 = 0;
    v5 = Path->Buffer - 1;
    Name->Length = 2;
    v6 = (wchar_t *)((char *)v5 + Length);
    v7 = 2;
    Name->Buffer = v6;
    if ( v6 < Path->Buffer )
      goto LABEL_6;
    while ( *v6 != 92 )
    {
      --v6;
      v7 += 2;
      Name->Buffer = v6;
      Name->Length = v7;
      if ( v6 < Path->Buffer )
        goto LABEL_6;
    }
    ++v6;
    v4 = 1;
    v7 -= 2;
    Name->Buffer = v6;
    Name->Length = v7;
    if ( v7 )
    {
LABEL_6:
      if ( !v4 )
      {
        v7 -= 2;
        Name->Length = v7;
        Name->Buffer = v6 + 1;
      }
    }
    else
    {
      Name->Buffer = 0LL;
      v7 = 0;
    }
    Name->MaximumLength = v7;
  }
  else
  {
    *(_QWORD *)&Name->Length = 0LL;
    Name->Buffer = 0LL;
  }
}
