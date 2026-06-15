/*
 * XREFs of ?CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z @ 0x180138144
 * Callers:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180016934 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?CreateHash@CRSABCrypt@@QEAAJPEAEKPEAPEAEPEAK@Z @ 0x1801382E8 (-CreateHash@CRSABCrypt@@QEAAJPEAEKPEAPEAEPEAK@Z.c)
 */

__int64 __fastcall CRSABCrypt::CheckSignature(
        BCRYPT_KEY_HANDLE *this,
        unsigned __int8 *a2,
        unsigned int a3,
        UCHAR *a4,
        ULONG cbSignature)
{
  bool v6; // zf
  NTSTATUS v8; // ebx
  PUCHAR pbHash; // [rsp+40h] [rbp-28h] BYREF
  const WCHAR *pPaddingInfo; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]
  ULONG cbHash; // [rsp+70h] [rbp+8h] BYREF

  cbHash = 0;
  pbHash = 0LL;
  v6 = *this == 0LL;
  v13 = 0;
  pPaddingInfo = L"SHA256";
  v12 = 478;
  if ( v6 || !this[1] )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    v8 = CRSABCrypt::CreateHash((CRSABCrypt *)this, a2, a3, &pbHash, &cbHash);
    if ( v8 >= 0 )
      v8 = BCryptVerifySignature(this[1], &pPaddingInfo, pbHash, cbHash, a4, cbSignature, 8u);
    if ( pbHash )
      operator delete(pbHash);
  }
  return (unsigned int)v8;
}
