/*
 * XREFs of sub_180018D8C @ 0x180018D8C
 * Callers:
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     RtlLoadString @ 0x180054EA0 (RtlLoadString.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     RtlFindMessage @ 0x180068320 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x18006F950 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x18007F660 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800E0040 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_180013968 @ 0x180013968 (sub_180013968.c)
 *     sub_180015754 @ 0x180015754 (sub_180015754.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_180018610 @ 0x180018610 (sub_180018610.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     sub_1800199E0 @ 0x1800199E0 (sub_1800199E0.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     LdrpResGetMappingSize @ 0x180058740 (LdrpResGetMappingSize.c)
 *     sub_18007E254 @ 0x18007E254 (sub_18007E254.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 *     sub_18009BC88 @ 0x18009BC88 (sub_18009BC88.c)
 *     ZwQueryDefaultLocale @ 0x18009C980 (ZwQueryDefaultLocale.c)
 */

__int64 __fastcall sub_180018D8C(void *a1, __int64 a2, DWORD a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 *v7; // r14
  PVOID v8; // r8
  __int64 v10; // rbx
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // di
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // r15d
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r14d
  int v26; // eax
  PVOID Heap; // rax
  PVOID v28; // rdx
  int v29; // edi
  _QWORD *v30; // rcx
  PVOID v31; // r15
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned __int16 v38; // ax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edi
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  _DWORD *v49; // rax
  __int64 v50; // r10
  __int16 v51; // r11
  unsigned int *v52; // r8
  unsigned __int64 v53; // rcx
  PVOID v54; // rdi
  unsigned int v55; // ecx
  _QWORD *v56; // r14
  int v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned __int16 v60[2]; // [rsp+30h] [rbp-118h] BYREF
  bool v61; // [rsp+34h] [rbp-114h]
  NTSTATUS v62; // [rsp+38h] [rbp-110h]
  unsigned __int16 v63; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v64; // [rsp+40h] [rbp-108h]
  __int64 v65; // [rsp+48h] [rbp-100h] BYREF
  unsigned int v66; // [rsp+50h] [rbp-F8h]
  PVOID DllHandle; // [rsp+58h] [rbp-F0h]
  __int64 v68; // [rsp+60h] [rbp-E8h]
  int v69; // [rsp+68h] [rbp-E0h]
  unsigned int v70; // [rsp+6Ch] [rbp-DCh]
  bool v71; // [rsp+70h] [rbp-D8h] BYREF
  DWORD v72; // [rsp+74h] [rbp-D4h] BYREF
  __int64 v73; // [rsp+78h] [rbp-D0h]
  __int64 v74; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+90h] [rbp-B8h] BYREF
  DWORD Lcid; // [rsp+94h] [rbp-B4h] BYREF
  unsigned int v78; // [rsp+98h] [rbp-B0h] BYREF
  unsigned int v79; // [rsp+9Ch] [rbp-ACh] BYREF
  __int64 v80; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-98h]
  struct _TEB *v83; // [rsp+C0h] [rbp-88h]
  unsigned int *v84; // [rsp+C8h] [rbp-80h]
  __int64 *v85; // [rsp+D0h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-70h] BYREF
  const wchar_t *v87; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-58h]
  __int64 v89; // [rsp+F8h] [rbp-50h]
  __int64 v90; // [rsp+100h] [rbp-48h]
  unsigned int v91; // [rsp+168h] [rbp+20h]

  v91 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  DllHandle = a1;
  v68 = a5;
  v10 = 0LL;
  v61 = 0;
  v81 = 0LL;
  v70 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return 3221225713LL;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_10;
  }
  if ( (a4 & 0x41) == 0 )
    return 3221225713LL;
LABEL_10:
  v12 = a3;
  if ( a3 == 4 )
    v12 = 3;
  v64 = v12;
  v69 = v12;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v12 - 1) <= 2 )
  {
    if ( v12 == 3 )
      v13 = *(_WORD *)(a2 + 16);
    else
      v13 = 0;
    v63 = v13;
    v14 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v15 = wcsicmp((const wchar_t *)v14, L"MUI"), v8 = DllHandle, v15))
      || (~(_BYTE)v5 & 8) == 0
      || (v13 & 0xF3FF) != 0
      || v13 == 3072 )
    {
      v5 |= sub_180018610(v8, (const wchar_t **)v7, (__int64)v8, v5);
      v91 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v62 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v87 = (const wchar_t *)*v7;
          if ( v64 < 2 )
            v16 = 0LL;
          else
            v16 = v7[1];
          v88 = v16;
          if ( v64 == 3 )
            v10 = v7[2];
          v89 = v10;
          if ( a3 == 4 )
            v90 = v7[3];
          result = sub_1800173F0(DllHandle, (__int64)&v87, a3, v5, (_QWORD *)v68);
          v62 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v91 = v5;
    }
  }
  v17 = sub_18001C4DC((int)DllHandle, (__int64)&v80);
  v19 = v80;
  if ( v17 < 0 )
    v19 = 0LL;
  v80 = v19;
  v82 = v19;
  if ( !v19 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(DllHandle, &v81, 256LL, v18);
  v62 = result;
  if ( (int)result >= 0 )
  {
    v75 = v19;
    v65 = 61166LL;
    v66 = 0;
    v20 = 0LL;
    v74 = 0LL;
    v73 = 0LL;
    v60[0] = 0;
    v63 = 0;
    v72 = 0;
    v21 = -1073741811;
    while ( 1 )
    {
      v22 = 3221225610LL;
      if ( !v19 )
        goto LABEL_50;
      v23 = v69;
      v22 = (unsigned int)--v69;
      if ( !v23 )
        goto LABEL_49;
      if ( !(_DWORD)v22 )
      {
        v24 = v73;
        if ( v64 == 3 )
          v24 = v19;
        v73 = v24;
      }
      if ( v73 )
      {
        v60[0] = 0;
        v63 = *(_WORD *)(a2 + 16);
        v61 = (v63 & 0x3FF) == 0;
        v25 = v64;
        goto LABEL_80;
      }
LABEL_158:
      result = sub_180015754(*(unsigned __int16 *)(v19 + 12), *(unsigned __int16 *)(v19 + 14), (int *)&v78);
      v62 = result;
      if ( (int)result < 0 )
        return result;
      result = sub_18009BC88(v78, 8LL, &v79);
      v62 = result;
      if ( (int)result < 0 )
        return result;
      v52 = (unsigned int *)(v19 + 16);
      v84 = (unsigned int *)(v19 + 16);
      v53 = v19 + 16 + v79;
      v54 = DllHandle;
      if ( v53 > v81 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL) )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v52 += 2 * v50;
        v84 = v52;
        LOWORD(v50) = v51;
      }
      if ( !(_WORD)v50 )
      {
        v55 = v64;
        switch ( v64 - v69 )
        {
          case 1u:
            v21 = -1073741686;
            break;
          case 2u:
            v21 = -1073741685;
            v62 = -1073741685;
            v54 = DllHandle;
            goto LABEL_172;
          case 3u:
            v21 = -1073741308;
            v62 = -1073741308;
            return (unsigned int)v21;
        }
        v62 = v21;
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
LABEL_172:
          if ( (v5 & 0x2040000) == 0 && v64 == 3 )
          {
            v87 = *(const wchar_t **)a2;
            v88 = *(_QWORD *)(a2 + 8);
            v89 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v90 = *(_QWORD *)(a2 + 24);
            v56 = (_QWORD *)v68;
            v57 = sub_1800173F0(v54, (__int64)&v87, a3, v5 | 0x1000000, (_QWORD *)v68);
            v55 = v64;
            if ( v57 != -1073020927 )
            {
              if ( v57 != -1073020922 )
                v21 = v57;
              v62 = v21;
            }
            goto LABEL_181;
          }
        }
        v56 = (_QWORD *)v68;
LABEL_181:
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
          v58 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v58 & 0x20000) != 0 && (v58 & 0x10) != 0 && v55 == 3 )
          {
            v87 = *(const wchar_t **)a2;
            v88 = *(_QWORD *)(a2 + 8);
            v89 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v90 = *(_QWORD *)(a2 + 24);
            v21 = sub_1800173F0(v54, (__int64)&v87, a3, v5, v56);
            v62 = v21;
            if ( v21 >= 0 )
              sub_18000A590(v54, 0LL, (__int64 *)&v87, a3);
          }
        }
        return (unsigned int)v21;
      }
      if ( v73 && (v5 & 0x20) != 0 )
        break;
      sub_1800199E0((unsigned __int16)v50, v82, v52, *v7++, &v75, &v74);
      v85 = v7;
      v19 = v75;
      v20 = v74;
    }
    v19 = 0LL;
    v75 = 0LL;
    v65 = *v52;
    v20 = v82 + v52[1];
    v74 = v20;
LABEL_49:
    v22 = 3221225610LL;
LABEL_50:
    if ( v20 )
    {
      v26 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        *(_QWORD *)v68 = v20;
        if ( !NtCurrentTeb()->ResourceRetValue )
        {
          v83 = NtCurrentTeb();
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
          v83->ResourceRetValue = Heap;
        }
        if ( NtCurrentTeb()->ResourceRetValue )
        {
          v28 = DllHandle;
          *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v74;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v28;
        }
        v29 = 0;
        v62 = 0;
        v5 = v91;
        v25 = v64;
        goto LABEL_57;
      }
    }
    else
    {
      v26 = v5 & 2;
    }
    if ( v19 && v26 )
    {
      v30 = (_QWORD *)v68;
      *(_QWORD *)v68 = v19;
      v29 = 0;
      v62 = 0;
      v25 = v64;
      goto LABEL_58;
    }
    v25 = v64;
    if ( v64 - v69 == 1 )
    {
      v29 = -1073741686;
      v62 = -1073741686;
      goto LABEL_57;
    }
    if ( v64 - v69 == 2 )
    {
      v29 = -1073741685;
      v62 = -1073741685;
      goto LABEL_57;
    }
    if ( v64 - v69 != 3 )
    {
      v29 = -1073741811;
      v62 = -1073741811;
      goto LABEL_57;
    }
    v29 = -1073741308;
    v62 = -1073741308;
    if ( v73 )
    {
      v74 = 0LL;
      while ( 1 )
      {
LABEL_80:
        v33 = v66++;
        if ( v33 > 6 )
        {
          v44 = v33 - 7;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( !v45 )
            {
              v60[0] = v65;
              if ( (~v5 & 0x80000) == 0 )
              {
                if ( NtCurrentTeb() )
                  v60[0] = NtCurrentTeb()->CurrentLocale;
                v5 = v91;
                goto LABEL_155;
              }
              goto LABEL_143;
            }
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                v48 = v47 - 1;
                if ( v48 )
                {
                  if ( v48 != 1 )
                    return 3221225988LL;
LABEL_143:
                  v5 |= 0x20u;
                  v91 = v5;
                  goto LABEL_155;
                }
                v38 = 1033;
              }
              else
              {
                v60[0] = v65;
                v62 = ZwQueryDefaultLocale(0, &DefaultLocaleId);
                if ( v62 < 0 )
                  goto LABEL_155;
                v38 = DefaultLocaleId;
                if ( DefaultLocaleId == v72 )
                  goto LABEL_155;
              }
            }
            else
            {
              v60[0] = v65;
              v62 = ZwQueryDefaultLocale(1u, &v72);
              if ( v62 < 0 )
                goto LABEL_155;
              v38 = v72;
            }
          }
          else
          {
            if ( (~v5 & 0x80000) == 0 )
              goto LABEL_153;
            v49 = sub_180018940(DllHandle, v22, 0, 1);
            if ( !v49 )
              goto LABEL_153;
            if ( *v49 != -20054323 )
              goto LABEL_153;
            if ( !v49[31] )
              goto LABEL_153;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v49 + (unsigned int)v49[31]));
            if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
              goto LABEL_153;
            v38 = Lcid;
          }
        }
        else
        {
          if ( v33 == 6 )
          {
            v60[0] = v65;
            if ( (v5 & 0x20) != 0 )
              goto LABEL_155;
            v60[0] = 0;
            if ( sub_180013968() )
            {
              v43 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v70 >= (unsigned int)v43 )
                v60[0] = 0;
              else
                sub_1800136CC(v43, (__int64)NtCurrentTeb()->MergedPrefLanguages, v70, v60, &v71);
              v5 = v91;
            }
            else
            {
              v60[0] = 0;
            }
            if ( v60[0] )
            {
              ++v70;
LABEL_128:
              --v66;
              goto LABEL_155;
            }
            goto LABEL_153;
          }
          if ( !v33 )
          {
            if ( !v63 )
            {
LABEL_98:
              v60[0] = 0;
              goto LABEL_155;
            }
            v38 = v65;
            if ( (v5 & 0x80000) != 0 )
              v38 = v63;
            goto LABEL_154;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            v39 = ~v5;
            if ( (~v5 & 0x80000) != 0 && (v39 & 0x20000) != 0 && (v39 & 0x10) != 0 )
            {
              v87 = *(const wchar_t **)a2;
              if ( v25 < 2 )
                v40 = 0LL;
              else
                v40 = *(_QWORD *)(a2 + 8);
              v88 = v40;
              if ( v25 == 3 )
                v41 = *(_QWORD *)(a2 + 16);
              else
                v41 = 0LL;
              v89 = v41;
              if ( a3 == 4 )
                v90 = *(_QWORD *)(a2 + 24);
              v42 = sub_1800173F0(DllHandle, (__int64)&v87, a3, v5, (_QWORD *)v68);
              v62 = v42;
              if ( v42 >= 0 )
              {
                sub_18000A590(DllHandle, 0LL, (__int64 *)&v87, a3);
                return (unsigned int)v42;
              }
            }
LABEL_153:
            v38 = v65;
            goto LABEL_154;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            v38 = v63;
            if ( v61 )
              v38 = v65;
            goto LABEL_154;
          }
          v36 = v35 - 1;
          if ( !v36 )
          {
            if ( (v5 & 4) != 0 )
              return 3221225988LL;
            if ( !v61 )
            {
              if ( (int)sub_18007E254(v60[0], v60, 1023LL) < 0 )
                goto LABEL_98;
              if ( !v60[0] )
                goto LABEL_155;
              goto LABEL_128;
            }
            goto LABEL_153;
          }
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 1 )
              return 3221225988LL;
            if ( !v61 )
              return 3221225988LL;
            goto LABEL_153;
          }
          if ( v61 )
            goto LABEL_153;
          v38 = v63 & 0x3FF;
        }
LABEL_154:
        v60[0] = v38;
LABEL_155:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v60[0] != v65 )
        {
          v65 = v60[0];
          v7 = &v65;
          v85 = &v65;
          v19 = v73;
          v75 = v73;
          goto LABEL_158;
        }
      }
    }
LABEL_57:
    v30 = (_QWORD *)v68;
LABEL_58:
    if ( (v5 & 0x2040000) != 0 || (unsigned int)(v29 + 1073741686) > 1 || v25 != 3 )
    {
      v31 = DllHandle;
    }
    else
    {
      v87 = *(const wchar_t **)a2;
      v88 = *(_QWORD *)(a2 + 8);
      v89 = *(_QWORD *)(a2 + 16);
      if ( a3 == 4 )
        v90 = *(_QWORD *)(a2 + 24);
      v31 = DllHandle;
      v32 = sub_1800173F0(DllHandle, (__int64)&v87, a3, v5 | 0x1000000, v30);
      if ( v32 != -1073020927 )
      {
        if ( v32 != -1073020922 )
          v29 = v32;
        v62 = v29;
      }
    }
    if ( (unsigned int)(v29 + 1073741686) <= 1 )
    {
      v59 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v59 & 0x20000) != 0 && (v59 & 0x10) != 0 && v25 == 3 )
      {
        v87 = *(const wchar_t **)a2;
        v88 = *(_QWORD *)(a2 + 8);
        v89 = *(_QWORD *)(a2 + 16);
        if ( a3 == 4 )
          v90 = *(_QWORD *)(a2 + 24);
        v29 = sub_1800173F0(v31, (__int64)&v87, a3, v5, (_QWORD *)v68);
        v62 = v29;
        if ( v29 >= 0 )
          sub_18000A590(v31, 0LL, (__int64 *)&v87, a3);
      }
    }
    return (unsigned int)v29;
  }
  return result;
}
