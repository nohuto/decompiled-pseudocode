/*
 * XREFs of ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C01BCC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C01BCB90 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleArrayProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        int a2,
        void **a3,
        unsigned __int64 a4,
        bool *Object)
{
  bool *v5; // r12
  NTSTATUS v6; // ebp
  __int64 i; // r14
  __int64 v11; // rsi
  struct _OBJECT_TYPE *v12; // rax

  v5 = Object;
  v6 = 0;
  *Object = 0;
  if ( a2 == 3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = (unsigned int)i;
      if ( (unsigned int)i >= a4 )
        break;
      v12 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C02121F8)();
      v6 = ObReferenceObjectByHandle(a3[i], 0xF0001u, v12, 1, (PVOID *)&Object, 0LL);
      if ( v6 < 0 )
        goto LABEL_10;
      a3[i] = Object;
    }
    if ( *((_QWORD *)this + 11) )
    {
      DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(this);
      *((_DWORD *)this + 4) |= 0x100u;
    }
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 9) = a3;
    a3 = 0LL;
    *((_QWORD *)this + 11) = a4;
    *v5 = 1;
LABEL_10:
    if ( a3 && (_DWORD)i )
    {
      do
      {
        ObfDereferenceObject(*a3++);
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
