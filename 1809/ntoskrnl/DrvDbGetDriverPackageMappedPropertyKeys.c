/*
 * XREFs of DrvDbGetDriverPackageMappedPropertyKeys @ 0x140902E84
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406D3B40 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x140902600 (DrvDbGetCompositeMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1409031AC (DrvDbGetDriverPackageSignerScore.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedPropertyKeys(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int *v6; // rsi
  __int64 v7; // r15
  unsigned int v8; // r12d
  __int64 v11; // rdi
  signed int CompositeMappedPropertyKeys; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 *v16; // rbx
  HANDLE v17; // r8
  int DriverPackageMappedProperty; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r13d
  const WCHAR **v25; // r14
  HANDLE v26; // rcx
  signed int Value; // eax
  const WCHAR *v28; // rcx
  __int64 v29; // rax
  HANDLE v30; // r8
  const WCHAR *v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edx
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v37; // [rsp+20h] [rbp-40h]
  unsigned int *pszDesta; // [rsp+28h] [rbp-38h]
  NTSTRSAFE_PWSTR pszDest; // [rsp+28h] [rbp-38h]
  int v40; // [rsp+40h] [rbp-20h] BYREF
  __int64 v41; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = (unsigned int *)a6;
  v7 = 0LL;
  v8 = a5;
  Handle[0] = 0LL;
  pszDesta = (unsigned int *)a6;
  *(_DWORD *)a6 = 0;
  v11 = a4;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(
                                  (__int64)a1,
                                  (_OWORD **)&off_140402E40,
                                  0xAu,
                                  a4,
                                  a5,
                                  pszDesta);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v14 = *v6;
    if ( (_DWORD)v14 )
    {
      if ( v13 )
        v11 = v13 + 20 * v14;
      v8 = a5 - v14;
    }
    if ( a3
      || (LOBYTE(pszDest) = 0,
          LODWORD(v37) = 1,
          CompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(a1, 0LL, 2u, a2, v37, pszDest, Handle, 0LL),
          CompositeMappedPropertyKeys >= 0) )
    {
      v15 = 0;
      v16 = (__int64 *)off_1403574F0;
      while ( 1 )
      {
        v17 = Handle[0];
        if ( a3 )
          v17 = a3;
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        a1,
                                        a2,
                                        v17,
                                        *v16,
                                        (_DWORD *)&v41 + 1,
                                        0LL,
                                        0,
                                        (unsigned int *)&v41);
        if ( DriverPackageMappedProperty != -1073741275 )
        {
          if ( DriverPackageMappedProperty && DriverPackageMappedProperty != -1073741789 )
            goto LABEL_23;
          if ( v11 && (unsigned int)v7 < v8 )
          {
            v19 = *v16;
            v20 = 5 * v7;
            v7 = (unsigned int)(v7 + 1);
            *(_OWORD *)(v11 + 4 * v20) = *(_OWORD *)*v16;
            *(_DWORD *)(v11 + 4 * v20 + 16) = *(_DWORD *)(v19 + 16);
          }
          v21 = *v6;
          v22 = -1;
          v23 = *v6 + 1;
          if ( v23 >= *v6 )
            v22 = *v6 + 1;
          *v6 = v22;
          if ( v23 < v21 )
            break;
        }
        ++v15;
        ++v16;
        if ( v15 >= 2 )
          goto LABEL_23;
      }
      *v6 = 0;
LABEL_23:
      v24 = 0;
      v25 = (const WCHAR **)&off_140351640;
      do
      {
        LODWORD(a6) = 0;
        v26 = Handle[0];
        if ( a3 )
          v26 = a3;
        Value = RegRtlQueryValue(v26, v25[2], 0LL, 0LL, (unsigned int *)&a6);
        CompositeMappedPropertyKeys = Value;
        if ( Value == -1073741772 )
        {
          v28 = *v25;
          if ( *((_DWORD *)*v25 + 4) != 7 )
            goto LABEL_35;
          v29 = *(_QWORD *)v28 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
          if ( *(_QWORD *)v28 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
            v29 = *((_QWORD *)v28 + 1) + 0x4524B8338B5D1E6CLL;
          if ( v29 )
            goto LABEL_35;
          v30 = Handle[0];
          if ( a3 )
            v30 = a3;
          if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v30, &v40) < 0 || v40 != 218103811 )
          {
LABEL_35:
            CompositeMappedPropertyKeys = 0;
            goto LABEL_44;
          }
        }
        else if ( Value && Value != -1073741789 )
        {
          break;
        }
        if ( v11 && (unsigned int)v7 < v8 )
        {
          v31 = *v25;
          v32 = 5 * v7;
          v7 = (unsigned int)(v7 + 1);
          *(_OWORD *)(v11 + 4 * v32) = *(_OWORD *)*v25;
          *(_DWORD *)(v11 + 4 * v32 + 16) = *((_DWORD *)v31 + 4);
        }
        v33 = *v6;
        v34 = -1;
        v35 = *v6 + 1;
        if ( v35 >= *v6 )
          v34 = *v6 + 1;
        CompositeMappedPropertyKeys = v35 < v33 ? 0xC0000095 : 0;
        *v6 = v34;
        if ( v35 < v33 )
        {
          *v6 = 0;
          break;
        }
LABEL_44:
        ++v24;
        v25 += 5;
      }
      while ( v24 < 0x1E );
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return (unsigned int)CompositeMappedPropertyKeys;
}
