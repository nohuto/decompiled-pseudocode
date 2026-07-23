/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x14069331C
 * Callers:
 *     PopEtGetProcessAppId @ 0x1406933FC (PopEtGetProcessAppId.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x140084310 (RtlQueryPackageIdentity.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x1406431CC (SeQueryUserSidToken.c)
 *     PsQueryProcessAttributesByToken @ 0x1406910F0 (PsQueryProcessAttributesByToken.c)
 */

signed __int64 __fastcall PopEtGetProcessSidAndPackageIdentity(struct _KPROCESS *a1, _DWORD *a2, __int64 a3)
{
  PACCESS_TOKEN v6; // rsi
  ULONG_PTR PackageSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+68h] [rbp+10h] BYREF
  ULONG v10; // [rsp+70h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  v6 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken((__int64)v6, &PackageSize, (struct _KTHREAD *)&AppIdSize);
  if ( (_BYTE)PackageSize )
  {
    PackageSize = 256LL;
    AppIdSize = 132LL;
    if ( RtlQueryPackageIdentity(v6, (PWSTR)(a3 + 4), &PackageSize, (PWSTR)(a3 + 260), &AppIdSize, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (PackageSize >> 1) - 1;
      *(_WORD *)(a3 + 2) = (AppIdSize >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken((__int64)v6, a2, 0x44u, &v10) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v6);
}
