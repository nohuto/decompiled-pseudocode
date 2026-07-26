/*
 * XREFs of ndisBindBuilderLoadSettings @ 0x1C01293F4
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C012936C (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4AB0 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C00CBF98 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0104E20 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisBindBuilderLoadSettings(void *a1)
{
  _BYTE *v1; // rbx
  unsigned int v2; // eax
  unsigned int ValueBoolean; // edi
  bool v4; // al
  unsigned int ValueString; // eax
  __int64 v6; // rcx
  PVOID v7; // rbx
  char *Atom; // rax
  PVOID P; // [rsp+30h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+18h] BYREF

  P = a1;
  v1 = ::P;
  Handle = 0LL;
  v2 = KRegKey::Open(
         (KRegKey *)&Handle,
         1u,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters",
         0LL);
  ValueBoolean = v2;
  if ( v2 == -1073741772 )
  {
    ValueBoolean = 0;
    goto LABEL_10;
  }
  if ( !v2 )
  {
    ValueBoolean = KRegKey::QueryValueBoolean(
                     (KRegKey *)&Handle,
                     (wchar_t *)L"StateSeparatedRegistryLayout",
                     (unsigned __int8 *)&P,
                     DefaultToFalse);
    if ( !ValueBoolean )
    {
      v1[96] = (_BYTE)P != 0;
      ValueBoolean = KRegKey::QueryValueBoolean(
                       (KRegKey *)&Handle,
                       (wchar_t *)L"DoNotWriteBindingsToRegistry",
                       (unsigned __int8 *)&P,
                       DefaultToFalse);
      if ( !ValueBoolean )
      {
        v4 = (_BYTE)P != 0;
        P = 0LL;
        v1[97] = v4;
        ValueString = KRegKey::QueryValueString((__int64)&Handle, L"UpperRangeReplacementToken", (__int64)&P);
        v7 = P;
        ValueBoolean = ValueString;
        if ( ValueString == -1073741772 )
        {
          *((_QWORD *)::P + 11) = 0LL;
LABEL_7:
          ValueBoolean = 0;
          goto LABEL_8;
        }
        if ( !ValueString )
        {
          Atom = Rtl::KStringAtomTableBase<1>::GetAtom(v6, *((_WORD **)P + 1));
          *((_QWORD *)::P + 11) = Atom;
          if ( Atom )
            goto LABEL_7;
          ValueBoolean = -1073741670;
        }
LABEL_8:
        if ( v7 )
          ExFreePoolWithTag(v7, 0x7274534Bu);
      }
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  return ValueBoolean;
}
