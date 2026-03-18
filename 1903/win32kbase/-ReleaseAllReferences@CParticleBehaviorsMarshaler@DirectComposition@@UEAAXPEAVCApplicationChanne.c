/*
 * XREFs of ?ReleaseAllReferences@CParticleBehaviorsMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B7660
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CParticleBehaviorsMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[7]);
  v4 = this[8];
  this[7] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[9];
  this[8] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
  v6 = this[10];
  this[9] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
  v7 = this[11];
  this[10] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
  v8 = this[12];
  this[11] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
  v9 = this[14];
  this[12] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
  v10 = this[15];
  this[14] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
  v11 = this[13];
  this[15] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
  v12 = this[16];
  this[13] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
  this[16] = 0LL;
}
