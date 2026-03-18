/*
 * XREFs of ?OnChanged@CCompositionMipmapSurface@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D17D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionMipmapSurface::OnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( a2 <= 1 )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( (*(_QWORD *)(a1 + 96) - v4) >> 5 )
      {
        v5 = 0LL;
        do
        {
          v6 = 32 * v5;
          if ( *(_QWORD *)(v6 + v4) == a3 )
          {
            *(_BYTE *)(v6 + v4 + 24) = 1;
            *(_BYTE *)(a1 + 152) = 1;
          }
          v4 = *(_QWORD *)(a1 + 88);
          v5 = ++v3;
        }
        while ( v3 < (unsigned __int64)((*(_QWORD *)(a1 + 96) - v4) >> 5) );
      }
    }
  }
  return 1LL;
}
