/*
 * XREFs of ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0019564
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C0019638 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqqq @ 0x1C00EAA04 (McTemplateK0qqqqq.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3,
        int a4)
{
  unsigned __int64 v5; // r10
  struct DirectComposition::CResourceMarshaler *v6; // r9
  unsigned int v7; // r15d
  char v8; // bp
  struct DirectComposition::CResourceMarshaler *v10; // r14
  signed int v11; // edi
  int v13; // ebx
  char v14; // al
  int v15; // ecx
  int v16; // r8d

  v5 = (unsigned int)(a2 - 1);
  v6 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10 == 0LL ? 0xC0000022 : 0;
  if ( v10 && a4 )
  {
    a3 = (unsigned int)(a4 - 1);
    if ( a3 < *((_QWORD *)this + 10) )
      v6 = *(struct DirectComposition::CResourceMarshaler **)(a3 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
    if ( !v6 )
      v11 = -1073741811;
  }
  if ( v11 >= 0 )
    v11 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(this, v10, v7, v6);
  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0
    && v11 >= 0
    && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, unsigned __int64, struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 120LL))(
         v10,
         109LL,
         a3,
         v6)
    && (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
  {
    v13 = *((_DWORD *)v10 + 6);
    v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 16LL))(v10);
    McTemplateK0qqqqq(v15, (unsigned int)&DCompResourcePropertyUpdate, v16, *((_DWORD *)this + 7), v13, v8, v14, v7);
  }
  return (unsigned int)v11;
}
