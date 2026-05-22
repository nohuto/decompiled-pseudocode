/*
 * XREFs of ??0SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@@Z @ 0x1801630C4
 * Callers:
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180162D4C (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SpatialInteractionSourceDevice(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::`vftable';
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = 0x2000;
  *(_QWORD *)(a1 + 40) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 48));
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 80));
  *(_QWORD *)(a1 + 88) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 108) = 0;
  return result;
}
