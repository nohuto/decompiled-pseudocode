/*
 * XREFs of ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C008E07C
 * Callers:
 *     ?TransferTokens@SfmTokenArray@@QEAAJPEAV1@@Z @ 0x1C008E050 (-TransferTokens@SfmTokenArray@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C008E170 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall SfmTokenArray::AddNotificationTokens(
        SfmTokenArray *this,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        unsigned int a3)
{
  int v6; // edi
  unsigned int v7; // eax

  v6 = SfmTokenArray::EnsureTokenBufferSize(this, a3);
  if ( v6 >= 0 )
  {
    memmove((void *)(*(_QWORD *)this + (unsigned int)(40 * *((_DWORD *)this + 3))), a2, 40 * a3);
    *((_DWORD *)this + 3) += a3;
    v7 = *((_DWORD *)this + 3);
    if ( v7 > *((_DWORD *)this + 2) )
      *((_DWORD *)this + 2) = v7;
  }
  return (unsigned int)v6;
}
