/*
 * XREFs of ?OnChanged@CSharedSection@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3B80
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapSharedMemory@CSharedSection@@AEBAXXZ @ 0x1800D311C (-UnmapSharedMemory@CSharedSection@@AEBAXXZ.c)
 */

__int64 __fastcall CSharedSection::OnChanged(__int64 a1)
{
  void *v1; // rsi
  LPVOID v2; // rdi
  __int64 result; // rax

  v1 = *(void **)(a1 + 56);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = MapViewOfFile(*(HANDLE *)(a1 + 56), 2u, 0, 0, *(unsigned int *)(a1 + 64));
    CloseHandle(v1);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 72) )
    CSharedSection::UnmapSharedMemory((CSharedSection *)a1);
  result = 0LL;
  *(_QWORD *)(a1 + 72) = v2;
  return result;
}
