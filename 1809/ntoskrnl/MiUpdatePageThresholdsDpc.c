/*
 * XREFs of MiUpdatePageThresholdsDpc @ 0x14017F8C0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 */

__int64 __fastcall MiUpdatePageThresholdsDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v12 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v12, (__int64)a2, (__int64)a3);
  }
  else
  {
    *(_DWORD *)a4 = v7 | *(_DWORD *)(a4 + 4);
    v8 = a2[2];
    *(_QWORD *)(v8 + 6120) = *a2;
    *(_QWORD *)(v8 + 6128) = a2[1];
    MiUpdateAvailableEvents(v8);
  }
  v9 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v10 = ~v9 & 0x80000000;
  if ( (v9 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i, (__int64)a2, (__int64)a3) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v10 )
        break;
    }
  }
  else
  {
    result = v10 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
