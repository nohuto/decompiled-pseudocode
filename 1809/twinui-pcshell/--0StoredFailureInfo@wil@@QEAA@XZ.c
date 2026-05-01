/*
 * XREFs of ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x18002F15C
 * Callers:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014426C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180306034 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??0?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD@Z @ 0x1803436BC (--0-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ??0?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803A8A1C (--0-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

wil::StoredFailureInfo *__fastcall wil::StoredFailureInfo::StoredFailureInfo(wil::StoredFailureInfo *this)
{
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  memset_0(this, 0, 0x90uLL);
  return this;
}
