/*
 * XREFs of ndisBlowStringListIntoAtoms @ 0x1C0105A20
 * Callers:
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C01063C0 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C0106590 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0106700 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C0081C1C (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C010439C (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0104E20 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010696C (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall ndisBlowStringListIntoAtoms(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int StringArray; // edi
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  void **v11; // rcx
  int v13; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-Ch]
  PVOID P; // [rsp+28h] [rbp-8h]

  v13 = 0;
  v14 = 0;
  P = 0LL;
  StringArray = NetSetupPropertyBag::ReadStringArray(a1, a2, (__int64)&v13);
  if ( !StringArray )
  {
    LODWORD(v5) = v14;
    if ( (unsigned __int8)Rtl::KArray<Rtl::_KStringAtom *,1>::reserve(a3, v14) )
    {
      v7 = v14;
      v8 = 0LL;
      *(_DWORD *)(a3 + 4) = v5;
      v9 = v7;
      if ( !v7 )
      {
LABEL_9:
        StringArray = 0;
        goto LABEL_13;
      }
      while ( 1 )
      {
        if ( v8 >= v9
          || v8 >= (unsigned int)v5
          || (v10 = *(_QWORD *)(a3 + 8),
              *(_QWORD *)(v10 + 8 * v8) = Rtl::KStringAtomTableBase<1>::GetAtom(
                                            v6,
                                            *(_WORD **)(*((_QWORD *)P + v8) + 8LL)),
              v5 = *(unsigned int *)(a3 + 4),
              v8 >= v5) )
        {
          __fastfail(5u);
        }
        if ( !*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v8) )
          break;
        v7 = v14;
        ++v8;
        v9 = v14;
        if ( v8 >= v14 )
          goto LABEL_9;
      }
    }
    StringArray = -1073741670;
  }
  v7 = v14;
LABEL_13:
  v11 = (void **)P;
  if ( P )
  {
    while ( v7 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v11[--v7]);
      v11 = (void **)P;
    }
    ExFreePoolWithTag(v11, 0x7272414Bu);
  }
  return StringArray;
}
