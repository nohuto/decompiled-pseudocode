/*
 * XREFs of ?ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues@@YAHPEAU_NDIS_RECEIVE_QUEUE_INFO_ARRAY@@KKPEAK@Z @ 0x1C00A761C
 * Callers:
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
        struct _NDIS_RECEIVE_QUEUE_INFO_ARRAY *a1,
        size_t Size,
        ULONG a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  ULONG v7; // eax
  size_t v8; // rbp
  struct _NDIS_RECEIVE_QUEUE_INFO_ARRAY *PoolWithTag; // rax
  struct _NDIS_RECEIVE_QUEUE_INFO_ARRAY *v10; // rbx
  ULONG v11; // r9d
  __int64 FirstElementOffset; // rdx
  UCHAR *v13; // rdx
  UCHAR *i; // r8
  _OWORD *v15; // rcx
  __int64 v16; // r10
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // r10
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1

  v4 = 0;
  v7 = 1088 * a1->NumElements + 16;
  *a4 = v7;
  if ( v7 <= a3 )
  {
    v8 = (unsigned int)Size;
    PoolWithTag = (struct _NDIS_RECEIVE_QUEUE_INFO_ARRAY *)ExAllocatePoolWithTag(
                                                             NonPagedPoolNx,
                                                             (unsigned int)Size,
                                                             0x3177444Eu);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, a1, v8);
      memset(a1, 0, *a4);
      v11 = 0;
      *a1 = *v10;
      FirstElementOffset = a1->FirstElementOffset;
      a1->ElementSize = 1088;
      v13 = &a1->Header.Type + FirstElementOffset;
      for ( i = &v10->Header.Type + v10->FirstElementOffset; v11 < v10->NumElements; v13 += a1->ElementSize )
      {
        v15 = v13 + 52;
        *(_DWORD *)v13 = *(_DWORD *)i;
        v16 = 4LL;
        *((_WORD *)v13 + 1) = 1084;
        *((_DWORD *)v13 + 1) = *((_DWORD *)i + 1);
        *((_DWORD *)v13 + 2) = *((_DWORD *)i + 2);
        *((_DWORD *)v13 + 3) = *((_DWORD *)i + 3);
        *((_DWORD *)v13 + 4) = *((_DWORD *)i + 4);
        *((_DWORD *)v13 + 5) = *((_DWORD *)i + 5);
        *((_QWORD *)v13 + 3) = *((_QWORD *)i + 3);
        *((_WORD *)v13 + 16) = *((_WORD *)i + 16);
        *((_WORD *)v13 + 17) = *((_WORD *)i + 17);
        *((_WORD *)v13 + 18) = *((_WORD *)i + 18);
        *((_WORD *)v13 + 19) = *((_WORD *)i + 19);
        *((_DWORD *)v13 + 10) = *((_DWORD *)i + 10);
        *((_DWORD *)v13 + 11) = *((_DWORD *)i + 11);
        *((_DWORD *)v13 + 12) = *((_DWORD *)i + 12);
        v17 = i + 52;
        do
        {
          *v15 = *v17;
          v15[1] = v17[1];
          v15[2] = v17[2];
          v15[3] = v17[3];
          v15[4] = v17[4];
          v15[5] = v17[5];
          v15[6] = v17[6];
          v15 += 8;
          v18 = v17[7];
          v17 += 8;
          *(v15 - 1) = v18;
          --v16;
        }
        while ( v16 );
        v19 = 4LL;
        *(_DWORD *)v15 = *(_DWORD *)v17;
        v20 = v13 + 568;
        v21 = i + 568;
        do
        {
          *v20 = *v21;
          v20[1] = v21[1];
          v20[2] = v21[2];
          v20[3] = v21[3];
          v20[4] = v21[4];
          v20[5] = v21[5];
          v20[6] = v21[6];
          v20 += 8;
          v22 = v21[7];
          v21 += 8;
          *(v20 - 1) = v22;
          --v19;
        }
        while ( v19 );
        ++v11;
        *(_DWORD *)v20 = *(_DWORD *)v21;
        i += v10->ElementSize;
      }
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073676268;
  }
  return v4;
}
