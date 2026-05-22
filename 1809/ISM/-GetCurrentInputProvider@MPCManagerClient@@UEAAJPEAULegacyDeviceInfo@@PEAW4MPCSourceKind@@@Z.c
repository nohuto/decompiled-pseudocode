/*
 * XREFs of ?GetCurrentInputProvider@MPCManagerClient@@UEAAJPEAULegacyDeviceInfo@@PEAW4MPCSourceKind@@@Z @ 0x1800DA860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::GetCurrentInputProvider(
        MPCManagerClient *this,
        struct LegacyDeviceInfo *a2,
        enum MPCSourceKind *a3)
{
  __int64 v3; // r9
  _OWORD *v4; // rax
  __int128 v5; // xmm1

  v3 = 7LL;
  v4 = (_OWORD *)((char *)this + 48);
  do
  {
    *(_OWORD *)a2 = *v4;
    *((_OWORD *)a2 + 1) = v4[1];
    *((_OWORD *)a2 + 2) = v4[2];
    *((_OWORD *)a2 + 3) = v4[3];
    *((_OWORD *)a2 + 4) = v4[4];
    *((_OWORD *)a2 + 5) = v4[5];
    *((_OWORD *)a2 + 6) = v4[6];
    a2 = (struct LegacyDeviceInfo *)((char *)a2 + 128);
    v5 = v4[7];
    v4 += 8;
    *((_OWORD *)a2 - 1) = v5;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)a2 = *v4;
  *((_OWORD *)a2 + 1) = v4[1];
  *((_OWORD *)a2 + 2) = v4[2];
  *((_OWORD *)a2 + 3) = v4[3];
  *((_OWORD *)a2 + 4) = v4[4];
  *((_QWORD *)a2 + 10) = *((_QWORD *)v4 + 10);
  *(_DWORD *)a3 = *((_DWORD *)this + 258);
  return 0LL;
}
