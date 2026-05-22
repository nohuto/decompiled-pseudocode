/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call @ 0x18012A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z @ 0x1800A5ACC (-SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800AE148 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKE@Z @ 0x1801233AC (-EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKK.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call(
        __int64 a1,
        char *a2)
{
  char v3; // di
  int v4; // eax
  __int64 v5; // rbx
  int v6; // esi
  _DWORD *v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v8; // rcx

  v3 = *a2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 104LL) )
  {
    v4 = SpatialInteractionDevices::SetHapticsWaveForm(
           (SpatialInteractionDevices *)(*(_QWORD *)(a1 + 8) + 120LL),
           (struct SpatialInteractionDevices::HID_HANDLE *)*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 744LL),
           v3);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v4;
    v7 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
    if ( v7 )
    {
      if ( *v7 )
      {
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance();
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::EffectiveHapticsFeedback_(
          v8,
          v6,
          *(_DWORD *)(v5 + 8),
          *(_DWORD *)(v5 + 12),
          v3);
      }
    }
  }
}
