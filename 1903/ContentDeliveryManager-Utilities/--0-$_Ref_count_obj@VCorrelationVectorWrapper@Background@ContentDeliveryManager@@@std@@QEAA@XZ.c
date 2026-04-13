/*
 * XREFs of ??0?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ @ 0x180036EC0
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x1800362B0 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA-AV-$shared_.c)
 * Callees:
 *     ?UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ @ 0x180026AA8 (-UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ.c)
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x18003747C (--$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
        __int64 a1)
{
  ContentDeliveryManager::Background::CorrelationVectorWrapper *v2; // rsi
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  void *v5; // rbx
  void *v6; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  UUID v9; // [rsp+30h] [rbp-38h] BYREF
  UUID Uuid; // [rsp+40h] [rbp-28h] BYREF

  v8[1] = -2LL;
  *(_QWORD *)&Uuid.Data1 = a1;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
  v2 = (ContentDeliveryManager::Background::CorrelationVectorWrapper *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = operator new(0x90uLL);
  v4 = v3;
  v8[0] = v3;
  if ( v3 )
  {
    v3[130] = 65;
    *(_QWORD *)&Uuid.Data1 = 0LL;
    *(_QWORD *)Uuid.Data4 = 0LL;
    UuidCreate(&Uuid);
    v9 = Uuid;
    v4[129] = 17;
    *((_QWORD *)v4 + 17) = 0x1300000000LL;
    memset_0(v4, 0, 0x81uLL);
    TLV::Base64Encode<129>(&v9, 12LL, v4);
    *((_WORD *)v4 + 8) = 46;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = v4;
  if ( v2 != (ContentDeliveryManager::Background::CorrelationVectorWrapper *)v8 )
  {
    v5 = 0LL;
    v6 = *(void **)v2;
    if ( v4 == *(_BYTE **)v2 )
      goto LABEL_11;
    if ( v6 )
      operator delete(v6);
    *(_QWORD *)v2 = v4;
    v4 = 0LL;
  }
  if ( v4 )
    operator delete(v5);
LABEL_11:
  ContentDeliveryManager::Background::CorrelationVectorWrapper::UpdateStringRepresentation(v2);
  return a1;
}
