/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z @ 0x1801EFE64
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18019BF20 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x1801F6C50 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(
        CInteractionProcessor *this,
        struct IManipulationResource *a2)
{
  struct IManipulationResource *v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  signed int v6; // edi

  *((_BYTE *)this + 808) &= 0xC0u;
  *((_QWORD *)this + 98) = 0LL;
  v2 = a2;
  *((_DWORD *)this + 198) = 0;
  *((_QWORD *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 812) = 0LL;
  *(_QWORD *)((char *)this + 820) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    v5 = 3LL;
    if ( *((_DWORD *)this + 317) != 1 )
      v5 = 0LL;
    (*(void (__fastcall **)(struct IManipulationResource *, __int64))(v4 + 32))(v2, v5);
  }
  *((_BYTE *)this + 148) &= 0xF1u;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 308) &= 0xF1u;
  *((_DWORD *)this + 76) = 0;
  *((_BYTE *)this + 468) &= 0xF1u;
  *((_DWORD *)this + 116) = 0;
  *((_BYTE *)this + 628) &= 0xF1u;
  *((_DWORD *)this + 156) = 0;
  *(_QWORD *)((char *)this + 1252) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 315) = 0;
  *((_WORD *)this + 624) = 0;
  v6 = *(_QWORD *)this == 0LL ? 0x8007139F : 0;
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**(_QWORD **)this + 32LL))(
      *(_QWORD *)this,
      a2,
      v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
    v6 = *((_QWORD *)this + 20) == 0LL ? 0x8007139F : 0;
  }
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**((_QWORD **)this + 20) + 32LL))(
      *((_QWORD *)this + 20),
      a2,
      v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 80LL))(*((_QWORD *)this + 20), 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 128LL))(*((_QWORD *)this + 20));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 32LL))(*((_QWORD *)this + 40));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 40) + 80LL))(*((_QWORD *)this + 40), 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 128LL))(*((_QWORD *)this + 40));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 60) + 80LL))(*((_QWORD *)this + 60), 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 128LL))(*((_QWORD *)this + 60));
  }
  return (unsigned int)v6;
}
