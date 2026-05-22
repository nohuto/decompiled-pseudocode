/*
 * XREFs of ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x180052B40
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800521E0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18001E170 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800377B0 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180052A38 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

__int64 __fastcall wil_details_StagingConfig_FireNotification(
        struct wil_details_StagingConfig *a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3,
        int a4)
{
  __int64 v4; // rdi
  __int16 v6; // r14
  int v7; // esi
  unsigned int updated; // r10d
  unsigned int i; // ebx
  const struct __WIL__WNF_TYPE_ID *v11; // r9
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rcx
  _WORD *v15; // rax
  void *v17; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v22[2046]; // [rsp+54h] [rbp-ACh] BYREF

  v4 = *((_QWORD *)a1 + 5);
  v6 = (__int16)a3;
  v7 = (int)a2;
  updated = 0;
  for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)a1 + 3) + 6LL); ++i )
  {
    if ( *(_DWORD *)(v4 + 16LL * i) == v7
      && *(_WORD *)(v4 + 16LL * i + 12) == v6
      && ((*(_DWORD *)(v4 + 16LL * i + 12) & 0x10000) == 0 || a4) )
    {
      v20[0] = *(_DWORD *)(v4 + 16LL * i + 4);
      v20[1] = *(_DWORD *)(v4 + 16LL * i + 8);
      do
      {
        v18 = 4096;
        updated = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)v20, a2, a3, &v19, &v21, &v18);
        if ( !updated )
        {
          v12 = v18;
          v13 = 0;
          if ( (v18 & 7) != 0 )
            v12 = 0;
          v18 = v12;
          v14 = v12 >> 3;
          if ( (_DWORD)v14 )
          {
            v15 = v22;
            while ( *((_DWORD *)v15 - 1) != v7 || *v15 != v6 )
            {
              ++v13;
              v15 += 4;
              if ( v13 >= (unsigned int)v14 )
                goto LABEL_15;
            }
          }
          else
          {
LABEL_15:
            if ( (unsigned __int64)v12 + 8 <= 0x1000 )
            {
              v12 += 8;
              *(_DWORD *)&v22[4 * v14 - 2] = v7;
              v18 = v12;
              v22[4 * v14] = v6;
            }
          }
          updated = wil_details_NtUpdateWnfStateData(
                      (const struct __WIL__WNF_STATE_NAME *)v20,
                      &v21,
                      v12,
                      v11,
                      v17,
                      v19,
                      1u);
        }
      }
      while ( updated == -1073741823 );
    }
  }
  return updated;
}
