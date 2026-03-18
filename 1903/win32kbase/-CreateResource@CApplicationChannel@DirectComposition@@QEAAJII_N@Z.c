/*
 * XREFs of ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0012AF4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0012220 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C0011F1C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0089330 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     McTemplateK0qqqxxqtt @ 0x1C01A6A6C (McTemplateK0qqqxxqtt.c)
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
