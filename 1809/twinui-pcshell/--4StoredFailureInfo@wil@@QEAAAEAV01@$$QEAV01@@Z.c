/*
 * XREFs of ??4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180108048
 * Callers:
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18031E944 (--4-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::StoredFailureInfo::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  v4 = (_QWORD *)(a1 + 144);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  wil::details::shared_buffer::reset((LPVOID *)(a1 + 144));
  *v4 = *(_QWORD *)(a2 + 144);
  v4[1] = *(_QWORD *)(a2 + 152);
  result = a1;
  *(_QWORD *)(a2 + 144) = 0LL;
  *(_QWORD *)(a2 + 152) = 0LL;
  return result;
}
