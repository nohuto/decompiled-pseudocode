/*
 * XREFs of PfSnCheckModernApp @ 0x1406688C0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140667DB4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x1400A4F70 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PfSnCheckModernApp(int *a1, _DWORD *a2, WCHAR *a3, ULONG_PTR *a4)
{
  int v8; // ebp
  _KPROCESS *Process; // r14
  PACCESS_TOKEN v10; // r15
  NTSTATUS PackageIdentity; // eax
  unsigned int v12; // esi
  int v13; // edi
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r10d
  int v22; // r10d
  int v23; // r10d
  int v24; // r10d
  unsigned __int8 *v25; // r11
  signed __int64 v26; // r10
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // r10d
  int v31; // r10d
  int v32; // r10d
  int v33; // r10d
  int v34; // r10d
  int v35; // r10d
  int v36; // r10d
  int v37; // r10d
  ULONG_PTR AppIdSize[2]; // [rsp+30h] [rbp-F8h] BYREF
  WCHAR AppId[72]; // [rsp+40h] [rbp-E8h] BYREF

  v8 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = PsReferencePrimaryToken(Process);
  AppIdSize[0] = 130LL;
  PackageIdentity = RtlQueryPackageIdentity(v10, a3, a4, AppId, AppIdSize, 0LL);
  v12 = PackageIdentity;
  if ( PackageIdentity >= 0 )
  {
    v15 = 314159LL;
    v16 = *a4 - 2;
    v17 = 314159LL;
    v13 = 1;
    if ( v16 >= 8 )
    {
      v18 = (unsigned __int64)v16 >> 3;
      v16 -= 8 * ((unsigned __int64)v16 >> 3);
      do
      {
        v19 = *((unsigned __int8 *)a3 + 6)
            + 37
            * (*((unsigned __int8 *)a3 + 5)
             + 37
             * (*((unsigned __int8 *)a3 + 4)
              + 37
              * (*((unsigned __int8 *)a3 + 3)
               + 37
               * (*((unsigned __int8 *)a3 + 2)
                + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v17))))));
        v20 = *((unsigned __int8 *)a3 + 7);
        a3 += 4;
        v17 = v20 + 37 * v19;
        --v18;
      }
      while ( v18 );
    }
    if ( v16 >= 1 && v16 <= 7 )
    {
      v21 = v16 - 1;
      if ( !v21 )
      {
LABEL_17:
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        goto LABEL_18;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
LABEL_16:
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_17;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_15:
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_16;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
LABEL_14:
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_15;
      }
      v36 = v24 - 1;
      if ( !v36 )
      {
LABEL_39:
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_14;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
LABEL_38:
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_39;
      }
      if ( v37 == 1 )
      {
        LODWORD(v17) = *(unsigned __int8 *)a3 + 37 * v17;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_38;
      }
    }
LABEL_18:
    v25 = (unsigned __int8 *)AppId;
    v26 = AppIdSize[0] - 2;
    if ( (signed __int64)(AppIdSize[0] - 2) >= 8 )
    {
      v27 = (unsigned __int64)v26 >> 3;
      v26 -= 8 * ((unsigned __int64)v26 >> 3);
      do
      {
        v28 = v25[6]
            + 37 * (v25[5] + 37 * (v25[4] + 37 * (v25[3] + 37 * (v25[2] + 37 * (v25[1] + 37 * (*v25 + 37 * v15))))));
        v29 = v25[7];
        v25 += 8;
        v15 = v29 + 37 * v28;
        --v27;
      }
      while ( v27 );
    }
    if ( v26 < 1 || v26 > 7 )
      goto LABEL_27;
    v30 = v26 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              v35 = v34 - 1;
              if ( v35 )
              {
                if ( v35 != 1 )
                  goto LABEL_27;
                LODWORD(v15) = *v25++ + 37 * v15;
              }
              LODWORD(v15) = *v25++ + 37 * v15;
            }
            LODWORD(v15) = *v25++ + 37 * v15;
          }
          LODWORD(v15) = *v25++ + 37 * v15;
        }
        LODWORD(v15) = *v25++ + 37 * v15;
      }
      LODWORD(v15) = *v25++ + 37 * v15;
    }
    LODWORD(v15) = *v25 + 37 * v15;
LABEL_27:
    v8 = v15 + v17;
    goto LABEL_3;
  }
  v13 = 0;
  if ( PackageIdentity == -1073741275 )
  {
LABEL_3:
    *a2 = v8;
    v12 = 0;
    *a1 = v13;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v10);
  return v12;
}
