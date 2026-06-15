/*
 * XREFs of ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140012E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rsi
  _DWORD *v8; // rcx
  int v9; // ebp
  __int64 v11; // rbx
  int v12; // eax

  v3 = 0;
  if ( !a1 )
    return (unsigned int)-2147024809;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    v7 = &unk_140063EA0;
    while ( 1 )
    {
      v8 = (_DWORD *)*(v7 - 2);
      if ( v8 )
      {
        v9 = 0;
        if ( *v8 != *a2 || v8[1] != a2[1] || v8[2] != a2[2] || v8[3] != a2[3] )
          goto LABEL_7;
      }
      else
      {
        v9 = 1;
      }
      if ( *v7 == 1LL )
      {
        v11 = a1 + *(v7 - 1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        *a3 = v11;
        return v3;
      }
      v12 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD *, _QWORD))*v7)(a1, a2, a3, *(v7 - 1));
      if ( !v12 || !v9 && v12 < 0 )
        return (unsigned int)v12;
LABEL_7:
      v7 += 3;
      if ( !*v7 )
        return (unsigned int)-2147467262;
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  *a3 = a1;
  return v3;
}
