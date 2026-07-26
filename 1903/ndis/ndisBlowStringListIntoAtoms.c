/*
 * XREFs of ndisBlowStringListIntoAtoms @ 0x1C0125D24
 * Callers:
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C0126700 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C01268D0 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0126A40 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00C7230 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C0124710 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C01251C0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0126CBC (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall ndisBlowStringListIntoAtoms(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int StringArray; // edi
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  void **v10; // rcx
  int v12; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-Ch]
  PVOID P; // [rsp+28h] [rbp-8h]

  v12 = 0;
  v13 = 0;
  P = 0LL;
  StringArray = NetSetupPropertyBag::ReadStringArray(a1, a2, (__int64)&v12);
  if ( !StringArray )
  {
    LODWORD(v5) = v13;
    if ( (unsigned __int8)Rtl::KArray<Rtl::_KStringAtom *,1>::reserve(a3, v13) )
    {
      v6 = v13;
      v7 = 0LL;
      *(_DWORD *)(a3 + 4) = v5;
      v8 = v6;
      if ( !v6 )
      {
LABEL_9:
        StringArray = 0;
        goto LABEL_13;
      }
      while ( 1 )
      {
        if ( v7 >= v8
          || v7 >= (unsigned int)v5
          || (v9 = *(_QWORD *)(a3 + 8),
              *(_QWORD *)(v9 + 8 * v7) = Rtl::KStringAtomTableBase<1>::GetAtom(
                                           (__int64)::P,
                                           *(_WORD **)(*((_QWORD *)P + v7) + 8LL)),
              v5 = *(unsigned int *)(a3 + 4),
              v7 >= v5) )
        {
          __fastfail(5u);
        }
        if ( !*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v7) )
          break;
        v6 = v13;
        ++v7;
        v8 = v13;
        if ( v7 >= v13 )
          goto LABEL_9;
      }
    }
    StringArray = -1073741670;
  }
  v6 = v13;
LABEL_13:
  v10 = (void **)P;
  if ( P )
  {
    while ( v6 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v10[--v6]);
      v10 = (void **)P;
    }
    ExFreePoolWithTag(v10, 0x7272414Bu);
  }
  return StringArray;
}
