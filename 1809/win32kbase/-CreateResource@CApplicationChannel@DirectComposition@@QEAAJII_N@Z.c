/*
 * XREFs of ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C00108D0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013030 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C005C298 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     McTemplateK0qqqxxqtt @ 0x1C0169544 (McTemplateK0qqqxxqtt.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        char a3,
        unsigned __int8 a4)
{
  int InternalSharedResource; // eax
  int inserted; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  struct DirectComposition::CResourceMarshaler *v12[2]; // [rsp+60h] [rbp-28h] BYREF

  if ( a4 )
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalSharedResource(this, a3, v12);
  else
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalResource(this, a3, v12);
  inserted = InternalSharedResource;
  if ( InternalSharedResource >= 0 )
  {
    v10 = v12[0];
    inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                 (DirectComposition::CApplicationChannel *)((char *)this + 56),
                 v12[0],
                 a2);
    if ( inserted < 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(this, v10);
    }
    else if ( SBYTE4(Microsoft_Windows_Win32kEnableBits) < 0 )
    {
      McTemplateK0qqqxxqtt(
        a4,
        a2,
        0,
        *((_DWORD *)this + 7),
        *((_DWORD *)v10 + 6),
        a2,
        *((_DWORD *)v10 + 6),
        a2,
        a3,
        a4,
        0);
    }
  }
  return (unsigned int)inserted;
}
