/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180068DB4
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180068D70 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // esi
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned int v10; // eax

  v2 = *((_DWORD *)this + 160);
  v3 = 0;
  v4 = *((_QWORD *)this + 77);
  v5 = 0LL;
  for ( i = a2; (unsigned int)v5 < v2; v5 = (unsigned int)(v5 + 1) )
  {
    if ( a2 == *(_QWORD *)(v4 + 8 * v5) )
      break;
  }
  if ( (unsigned int)v5 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x9E3u);
  }
  else
  {
    if ( (unsigned int)v5 < v2 - 1 )
    {
      do
      {
        a2 = (unsigned int)(v5 + 1);
        v8 = (unsigned int)v5;
        v5 = a2;
        *(_QWORD *)(v4 + 8 * v8) = *(_QWORD *)(v4 + 8 * a2);
        v2 = *((_DWORD *)this + 160);
      }
      while ( (unsigned int)a2 < v2 - 1 );
    }
    *((_DWORD *)this + 160) = v2 - 1;
  }
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)i + 16LL))(
         i,
         a2,
         v5);
  v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)i + 32LL))(i);
  if ( v9 || v10 )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**((_QWORD **)this + 67) + 56LL))(
      *((_QWORD *)this + 67),
      v10,
      i | 0xDD00000000000000uLL,
      v9);
  return v3;
}
