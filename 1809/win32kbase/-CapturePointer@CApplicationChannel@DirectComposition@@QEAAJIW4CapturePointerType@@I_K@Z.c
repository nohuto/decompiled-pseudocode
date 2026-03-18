/*
 * XREFs of ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01684CC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00199AC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C0183504 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdi
  int v12; // eax

  if ( !CInputManager::OwnsPointerId(*(_DWORD *)(a1 + 696), a4) )
    return (unsigned int)-1073741790;
  v10 = (unsigned int)(a2 - 1);
  if ( a2 && v10 < *(_QWORD *)(a1 + 80) )
  {
    _mm_lfence();
    v11 = *(struct DirectComposition::CResourceMarshaler **)(v10 * *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 56));
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v11 + 120LL))(
          v11,
          83LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, _QWORD, __int64))(*(_QWORD *)v11 + 264LL))(
              v11,
              a1,
              a4,
              a5);
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, _QWORD))(*(_QWORD *)v11 + 256LL))(
          v11,
          a1,
          a4);
LABEL_13:
  v9 = v12;
  if ( v12 >= 0 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList((DirectComposition::CApplicationChannel *)a1, v11);
  return v9;
}
