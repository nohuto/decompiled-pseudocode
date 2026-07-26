/*
 * XREFs of ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0105E28
 * Callers:
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C01063C0 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C5000 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0104E20 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisGetFilterAltitude(struct NetSetupPropertyBag *a1, unsigned int *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char *Atom; // r10
  unsigned int v7; // ecx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  v3 = NetSetupPropertyBag::ReadString(a1, (const struct _NETSETUPPROPKEY *)&unk_1C0091508, &P);
  v5 = v3;
  if ( v3 == -1073741772 )
  {
    *a2 = 0;
LABEL_18:
    v5 = 0;
    goto LABEL_14;
  }
  if ( v3 )
    goto LABEL_14;
  Atom = Rtl::KStringAtomTableBase<1>::GetAtom(v4, *((_WORD **)P + 1));
  if ( !Atom )
  {
    v5 = -1073741670;
    goto LABEL_14;
  }
  v7 = 0;
  if ( *((_DWORD *)::P + 19) )
  {
    v8 = *((unsigned int *)::P + 19);
    while ( 1 )
    {
      v9 = v7;
      if ( v7 >= v8 )
        __fastfail(5u);
      ++v7;
      if ( *(char **)(*((_QWORD *)::P + 10) + 8 * v9) == Atom )
        break;
      if ( v7 >= (unsigned int)v8 )
        goto LABEL_11;
    }
    *a2 = v7;
    goto LABEL_18;
  }
LABEL_11:
  if ( (unsigned __int8)byte_1C00A0259 >= 2u )
    WPP_SF_Z(0xAu, &WPP_0ccab54d714a3f5b20136abca93640c2_Traceguids, (const wchar_t *)P);
  v5 = -1073741637;
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0x7274534Bu);
  return v5;
}
