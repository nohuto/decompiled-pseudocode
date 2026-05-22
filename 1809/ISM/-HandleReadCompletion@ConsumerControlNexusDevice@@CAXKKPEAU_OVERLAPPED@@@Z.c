/*
 * XREFs of ?HandleReadCompletion@ConsumerControlNexusDevice@@CAXKKPEAU_OVERLAPPED@@@Z @ 0x180078140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ConsumerControlNexusDevice::HandleReadCompletion(
        DWORD dwErrorCode,
        DWORD dwNumberOfBytesTransfered,
        char *lpOverlapped)
{
  char *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  char **v7; // rax
  __int64 v8; // rax
  char **v9; // rcx

  v3 = lpOverlapped - 24;
  v4 = dwNumberOfBytesTransfered;
  *((_DWORD *)v3 + 14) = dwErrorCode;
  v5 = *(_QWORD *)v3;
  v6 = *((_QWORD *)v3 + 2);
  *((_QWORD *)v3 + 8) = v4;
  if ( *(char **)(v5 + 8) != v3
    || (v7 = (char **)*((_QWORD *)v3 + 1), *v7 != v3)
    || (*v7 = (char *)v5,
        *(_QWORD *)(v5 + 8) = v7,
        --*(_QWORD *)(v6 + 88),
        v8 = *((_QWORD *)v3 + 2) + 48LL,
        v9 = *(char ***)(*((_QWORD *)v3 + 2) + 56LL),
        *v9 != (char *)v8) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v3 = v8;
  *((_QWORD *)v3 + 1) = v9;
  *v9 = v3;
  ++*(_QWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 8) = v3;
}
