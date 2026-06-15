/*
 * XREFs of ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x180043750
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003190C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
        CSharedStreamGroupProxy *this,
        struct AuxiliaryInputDescriptor *a2)
{
  int v2; // ebx
  int v4; // edi
  __int64 v5; // rsi
  const unsigned __int16 *v7; // rbp
  void **v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  if ( v5 && !*(_DWORD *)(v5 + 8) )
  {
    v7 = *(const unsigned __int16 **)(v5 + 16);
    if ( v7 )
    {
      v8 = (void **)((char *)a2 + 8);
      v9 = -1LL;
      do
        ++v9;
      while ( v7[v9] );
      v10 = v9 + 1;
      *v8 = 0LL;
      if ( v9 + 1 >= v9 && is_mul_ok(v10, 2uLL) )
      {
        v4 = CTCoAllocPolicy::Alloc(this, (v10 * (unsigned __int128)2uLL) >> 64, 2 * v10, v8);
        if ( v4 >= 0 )
          StringCchCopyNExW((char *)*v8, v9 + 1, v7, v9);
      }
      else
      {
        v4 = -2147024362;
      }
    }
    else
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 32LL))(
             *(_QWORD *)&g_DeviceEnumerator,
             0LL,
             *(unsigned int *)(v5 + 24),
             &v11) >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 40LL))(v11, (char *)a2 + 8);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    }
    LOBYTE(v2) = *((_QWORD *)a2 + 1) != 0LL;
    *(_DWORD *)a2 = v2;
  }
  return (unsigned int)v4;
}
