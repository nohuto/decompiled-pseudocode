/*
 * XREFs of ndisOidPostPMAddWOLPattern @ 0x1C001C830
 * Callers:
 *     <none>
 * Callees:
 *     ndisMiniportPostAddWOLPattern @ 0x1C0034914 (ndisMiniportPostAddWOLPattern.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0035188 (ndisGetCombinedPMConfig.c)
 *     ndisEnablePMParamForPattern @ 0x1C0072E58 (ndisEnablePMParamForPattern.c)
 *     ndisMiniportPostAddWakeUpPattern @ 0x1C0073B20 (ndisMiniportPostAddWakeUpPattern.c)
 */

void __fastcall ndisOidPostPMAddWOLPattern(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int8 v6; // al
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  PVOID *v10; // r14
  void *v11; // rcx
  PVOID *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rcx
  void *v16; // rcx

  v1 = a1[4];
  v3 = a1[3];
  v4 = *a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      v10 = *(PVOID **)(v1 + 144);
      if ( v10 )
      {
        ExFreePoolWithTag(v10[3], 0);
        *(_DWORD *)(v1 + 32) = *(_DWORD *)v10;
        *(_QWORD *)(v1 + 40) = v10[1];
        *(_DWORD *)(v1 + 48) = *((_DWORD *)v10 + 4);
        ExFreePoolWithTag(v10, 0);
        *(_QWORD *)(v1 + 144) = 0LL;
        v3 = a1[3];
      }
      if ( v3 )
      {
        v11 = *(void **)(v1 + 160);
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
      }
      if ( a1[1] )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v15 = *(void **)(v1 + 160);
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
        }
      }
      if ( *a1 )
      {
        v16 = *(void **)(v4 + 192);
        *(_QWORD *)(v4 + 192) = 0LL;
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        v6 = *(_BYTE *)(v4 + 32);
        if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v4 + 33) >= 0x14u )
        {
          ndisMiniportPostAddWOLPattern(*a1, v1);
          if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqWmi )
          {
            ndisEnablePMParamForPattern(*(_QWORD *)(v1 + 40), v4 + 1140);
            ndisGetCombinedPMConfig(v4, v4 + 1120);
          }
        }
        else
        {
          ndisMiniportPostAddWakeUpPattern(*a1, v1);
          v12 = *(PVOID **)(v1 + 144);
          ExFreePoolWithTag(v12[3], 0);
          *(_DWORD *)(v1 + 32) = *(_DWORD *)v12;
          *(_QWORD *)(v1 + 40) = v12[1];
          *(_DWORD *)(v1 + 48) = *((_DWORD *)v12 + 4);
          ExFreePoolWithTag(v12, 0);
          *(_QWORD *)(v1 + 144) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = *(_DWORD *)(v1 + 152);
        }
      }
      if ( a1[3] )
      {
        v8 = *(_QWORD *)(v1 + 40);
        v9 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v9 + 196) = *(_DWORD *)(v8 + 148);
        *(_DWORD *)(v9 + 40) = *(_DWORD *)(v8 + 148);
        *(_QWORD *)v9 = *(_QWORD *)(v3 + 504);
        *(_QWORD *)(v3 + 504) = v9;
      }
      v7 = a1[1];
      if ( v7 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v13 = *(_QWORD *)(v1 + 40);
          v14 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v14 + 196) = *(_DWORD *)(v13 + 148);
          *(_DWORD *)(v14 + 40) = *(_DWORD *)(v13 + 148);
          *(_QWORD *)v14 = *(_QWORD *)(v7 + 720);
          *(_QWORD *)(v7 + 720) = v14;
        }
      }
    }
  }
}
