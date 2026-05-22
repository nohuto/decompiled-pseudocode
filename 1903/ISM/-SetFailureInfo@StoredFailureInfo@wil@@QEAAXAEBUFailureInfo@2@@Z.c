/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180051CAC
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180052340 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18009D990 (-NotifyFailure@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflector.c)
 *     ?NotifyFailure@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800E2C00 (-NotifyFailure@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAA.c)
 *     ?NotifyFailure@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800E2FC0 (-NotifyFailure@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18015A330 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgRefle.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18015A570 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefle.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18015A930 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 * Callees:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18004E464 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18004E4F4 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180051968 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x180051990 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180052A0C (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180052BB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdi
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rdi
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rdi
  const char *v9; // rdx
  __int64 v10; // rdi
  const char *v11; // rdx
  __int64 v12; // rdi
  const char *v13; // rdx
  __int64 v14; // rdi
  const char *v15; // rdx
  __int64 v16; // rdi
  const char *v17; // rdx
  __int64 v18; // rdi
  const char *v19; // rdx
  __int64 v20; // rdi
  const char *v21; // rdx
  unsigned __int64 v22; // rdi
  wil::details *v23; // r8
  _DWORD *v24; // rcx
  const unsigned __int16 *v25; // r14
  char *v26; // rcx
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 13), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 10), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 8), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 4), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v21) + v20;
  v24 = (_DWORD *)*((_QWORD *)this + 18);
  v25 = 0LL;
  if ( !v24 || *v24 != 1 || *((_QWORD *)this + 19) < v22 )
  {
    wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 144));
    wil::details::shared_buffer::create((wil::StoredFailureInfo *)((char *)this + 144), 0LL, v22);
    v24 = (_DWORD *)*((_QWORD *)this + 18);
    v23 = (wil::details *)*((_QWORD *)a2 + 2);
  }
  v26 = (char *)((unsigned __int64)(v24 + 1) & -(__int64)(v24 != 0LL));
  if ( v26 )
    v25 = (const unsigned __int16 *)&v26[*((_QWORD *)this + 19)];
  v27 = wil::details::WriteResultString<unsigned short const *>(v26, v25, v23, (_QWORD *)this + 2);
  v28 = wil::details::WriteResultString<char const *>(
          v27,
          (const char *)v25,
          *((wil::details **)a2 + 4),
          (_QWORD *)this + 4);
  v29 = wil::details::WriteResultString<char const *>(
          v28,
          (const char *)v25,
          *((wil::details **)a2 + 5),
          (_QWORD *)this + 5);
  v30 = wil::details::WriteResultString<char const *>(
          v29,
          (const char *)v25,
          *((wil::details **)a2 + 6),
          (_QWORD *)this + 6);
  v31 = wil::details::WriteResultString<char const *>(
          v30,
          (const char *)v25,
          *((wil::details **)a2 + 8),
          (_QWORD *)this + 8);
  v32 = wil::details::WriteResultString<char const *>(
          v31,
          (const char *)v25,
          *((wil::details **)a2 + 15),
          (_QWORD *)this + 15);
  v33 = wil::details::WriteResultString<char const *>(
          v32,
          (const char *)v25,
          *((wil::details **)a2 + 13),
          (_QWORD *)this + 13);
  v34 = wil::details::WriteResultString<unsigned short const *>(
          v33,
          v25,
          *((wil::details **)a2 + 14),
          (_QWORD *)this + 14);
  v35 = wil::details::WriteResultString<char const *>(
          v34,
          (const char *)v25,
          *((wil::details **)a2 + 10),
          (_QWORD *)this + 10);
  wil::details::WriteResultString<unsigned short const *>(v35, v25, *((wil::details **)a2 + 11), (_QWORD *)this + 11);
}
