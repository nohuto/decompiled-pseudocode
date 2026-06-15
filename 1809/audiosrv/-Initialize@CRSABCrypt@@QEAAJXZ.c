/*
 * XREFs of ?Initialize@CRSABCrypt@@QEAAJXZ @ 0x180139EDC
 * Callers:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180016934 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRSABCrypt::Initialize(BCRYPT_ALG_HANDLE *this)
{
  NTSTATUS v2; // ebx
  _DWORD *v3; // rax
  UCHAR *pbInput; // rdi
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1

  if ( *this )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    v2 = BCryptOpenAlgorithmProvider(this, L"RSA", L"Microsoft Primitive Provider", 0);
    if ( v2 >= 0 )
    {
      v3 = operator new[](0x21CuLL, (const struct std::nothrow_t *)&std::nothrow);
      pbInput = (UCHAR *)v3;
      if ( v3 )
      {
        v3[4] = 0;
        v5 = &unk_180182380;
        v3[5] = 0;
        v6 = 4LL;
        *v3 = 826364754;
        v3[1] = 4096;
        v3[2] = 4;
        v3[3] = 512;
        v3[6] = 16777472;
        v7 = v3 + 7;
        do
        {
          *v7 = *v5;
          v7[1] = v5[1];
          v7[2] = v5[2];
          v7[3] = v5[3];
          v7[4] = v5[4];
          v7[5] = v5[5];
          v7[6] = v5[6];
          v7 += 8;
          v8 = v5[7];
          v5 += 8;
          *(v7 - 1) = v8;
          --v6;
        }
        while ( v6 );
        if ( !*this || this[1] )
          v2 = -2147418113;
        else
          v2 = BCryptImportKeyPair(*this, 0LL, L"PUBLICBLOB", this + 1, pbInput, 0x21Cu, 0);
        operator delete(pbInput);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  return (unsigned int)v2;
}
