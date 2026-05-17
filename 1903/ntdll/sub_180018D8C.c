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

__int64 __fastcall sub_180018D8C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned __int64 *a5)
{
  unsigned int v5; // esi
  __int64 *v7; // r14
  __int64 v8; // r8
  __int64 v10; // rbx
  int v11; // edx
  __int64 result; // rax
  int v13; // ecx
  unsigned __int16 v14; // di
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  __int64 CurrentLocale_low; // rcx
  int v22; // r15d
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned int v26; // r14d
  int v27; // eax
  __int64 Heap; // rax
  __int64 v29; // rdx
  int v30; // edi
  unsigned __int64 *v31; // rcx
  __int64 v32; // r15
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int16 v39; // ax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // edi
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  struct _TEB *v49; // rax
  _DWORD *v50; // rax
  __int64 v51; // r10
  __int16 v52; // r11
  unsigned int *v53; // r8
  unsigned __int64 v54; // rcx
  __int64 v55; // rdi
  unsigned int v56; // ecx
  unsigned __int64 *v57; // r14
  int v58; // eax
  int v59; // eax
  int v60; // eax
  unsigned __int16 v61[2]; // [rsp+30h] [rbp-118h] BYREF
  bool v62; // [rsp+34h] [rbp-114h]
  int v63; // [rsp+38h] [rbp-110h]
  unsigned __int16 v64; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v65; // [rsp+40h] [rbp-108h]
  __int64 v66; // [rsp+48h] [rbp-100h] BYREF
  unsigned int v67; // [rsp+50h] [rbp-F8h]
  __int64 v68; // [rsp+58h] [rbp-F0h]
  unsigned __int64 *v69; // [rsp+60h] [rbp-E8h]
  int v70; // [rsp+68h] [rbp-E0h]
  unsigned int v71; // [rsp+6Ch] [rbp-DCh]
  bool v72; // [rsp+70h] [rbp-D8h] BYREF
  int v73; // [rsp+74h] [rbp-D4h] BYREF
  unsigned __int64 v74; // [rsp+78h] [rbp-D0h]
  __int64 v75; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v76; // [rsp+88h] [rbp-C0h] BYREF
  int v77; // [rsp+90h] [rbp-B8h] BYREF
  int v78; // [rsp+94h] [rbp-B4h] BYREF
  unsigned int v79; // [rsp+98h] [rbp-B0h] BYREF
  unsigned int v80; // [rsp+9Ch] [rbp-ACh] BYREF
  unsigned __int64 v81; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-A0h] BYREF
  unsigned __int64 v83; // [rsp+B0h] [rbp-98h]
  char v84; // [rsp+B8h] [rbp-90h] BYREF
  struct _TEB *v85; // [rsp+C0h] [rbp-88h]
  unsigned int *v86; // [rsp+C8h] [rbp-80h]
  __int64 *v87; // [rsp+D0h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-70h] BYREF
  const wchar_t *v89; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-58h]
  __int64 v91; // [rsp+F8h] [rbp-50h]
  __int64 v92; // [rsp+100h] [rbp-48h]
  unsigned int v93; // [rsp+168h] [rbp+20h]

  v93 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v68 = a1;
  v69 = a5;
  v10 = 0LL;
  v62 = 0;
  v82 = 0LL;
  v71 = 0;
  v11 = 3;
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
  v13 = a3;
  if ( a3 == 4 )
    v13 = 3;
  v65 = v13;
  v70 = v13;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v13 - 1) <= 2 )
  {
    if ( v13 == 3 )
      v14 = *((_WORD *)v7 + 8);
    else
      v14 = 0;
    v64 = v14;
    v15 = *v7;
    if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v16 = wcsicmp((const wchar_t *)v15, L"MUI"), v8 = v68, v16))
      || (~(_BYTE)v5 & 8) == 0
      || (v14 & 0xF3FF) != 0
      || v14 == 3072 )
    {
      v5 |= sub_180018610(v8, (const wchar_t **)v7, v8, v5);
      v93 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v63 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v89 = (const wchar_t *)*v7;
          if ( v65 < 2 )
            v17 = 0LL;
          else
            v17 = v7[1];
          v90 = v17;
          if ( v65 == 3 )
            v10 = v7[2];
          v91 = v10;
          if ( a3 == 4 )
            v92 = v7[3];
          result = sub_1800173F0(v68, (__int64)&v89, a3, v5, v69);
          v63 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v93 = v5;
    }
  }
  LOBYTE(v11) = 1;
  v18 = sub_18001C4DC(v68, v11, 2, (unsigned int)&v84, (__int64)&v81);
  v20 = v81;
  if ( v18 < 0 )
    v20 = 0LL;
  v81 = v20;
  v83 = v20;
  if ( !v20 )
    return 3221225609LL;
  LOBYTE(v19) = 1;
  result = LdrpResGetMappingSize(v68, &v82, 256LL, v19);
  v63 = result;
  if ( (int)result >= 0 )
  {
    v76 = v20;
    v66 = 61166LL;
    v67 = 0;
    CurrentLocale_low = 0LL;
    v75 = 0LL;
    v74 = 0LL;
    v61[0] = 0;
    v64 = 0;
    v73 = 0;
    v22 = -1073741811;
    while ( 1 )
    {
      v23 = 3221225610LL;
      if ( !v20 )
        goto LABEL_50;
      v24 = v70;
      v23 = (unsigned int)--v70;
      if ( !v24 )
        goto LABEL_49;
      if ( !(_DWORD)v23 )
      {
        v25 = v74;
        if ( v65 == 3 )
          v25 = v20;
        v74 = v25;
      }
      if ( v74 )
      {
        v61[0] = 0;
        v64 = *(_WORD *)(a2 + 16);
        v62 = (v64 & 0x3FF) == 0;
        v26 = v65;
        goto LABEL_80;
      }
LABEL_158:
      result = sub_180015754(*(unsigned __int16 *)(v20 + 12), *(unsigned __int16 *)(v20 + 14), (int *)&v79);
      v63 = result;
      if ( (int)result < 0 )
        return result;
      result = sub_18009BC88(v79, 8LL, &v80);
      v63 = result;
      if ( (int)result < 0 )
        return result;
      v53 = (unsigned int *)(v20 + 16);
      v86 = (unsigned int *)(v20 + 16);
      v54 = v20 + 16 + v80;
      v55 = v68;
      if ( v54 > v82 + (v68 & 0xFFFFFFFFFFFFFFFCuLL) )
        return 3221225595LL;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v53 += 2 * v51;
        v86 = v53;
        LOWORD(v51) = v52;
      }
      if ( !(_WORD)v51 )
      {
        v56 = v65;
        switch ( v65 - v70 )
        {
          case 1u:
            v22 = -1073741686;
            break;
          case 2u:
            v22 = -1073741685;
            v63 = -1073741685;
            v55 = v68;
            goto LABEL_172;
          case 3u:
            v22 = -1073741308;
            v63 = -1073741308;
            return (unsigned int)v22;
        }
        v63 = v22;
        if ( (unsigned int)(v22 + 1073741686) <= 1 )
        {
LABEL_172:
          if ( (v5 & 0x2040000) == 0 && v65 == 3 )
          {
            v89 = *(const wchar_t **)a2;
            v90 = *(_QWORD *)(a2 + 8);
            v91 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v92 = *(_QWORD *)(a2 + 24);
            v57 = v69;
            v58 = sub_1800173F0(v55, (__int64)&v89, a3, v5 | 0x1000000, v69);
            v56 = v65;
            if ( v58 != -1073020927 )
            {
              if ( v58 != -1073020922 )
                v22 = v58;
              v63 = v22;
            }
            goto LABEL_181;
          }
        }
        v57 = v69;
LABEL_181:
        if ( (unsigned int)(v22 + 1073741686) <= 1 )
        {
          v59 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v59 & 0x20000) != 0 && (v59 & 0x10) != 0 && v56 == 3 )
          {
            v89 = *(const wchar_t **)a2;
            v90 = *(_QWORD *)(a2 + 8);
            v91 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v92 = *(_QWORD *)(a2 + 24);
            v22 = sub_1800173F0(v55, (__int64)&v89, a3, v5, v57);
            v63 = v22;
            if ( v22 >= 0 )
              sub_18000A590(v55, 0LL, (__int64 *)&v89, a3);
          }
        }
        return (unsigned int)v22;
      }
      if ( v74 && (v5 & 0x20) != 0 )
        break;
      sub_1800199E0((unsigned __int16)v51, v83, v53, *v7++, &v76, &v75);
      v87 = v7;
      v20 = v76;
      CurrentLocale_low = v75;
    }
    v20 = 0LL;
    v76 = 0LL;
    v66 = *v53;
    CurrentLocale_low = v83 + v53[1];
    v75 = CurrentLocale_low;
LABEL_49:
    v23 = 3221225610LL;
LABEL_50:
    if ( CurrentLocale_low )
    {
      v27 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        *v69 = CurrentLocale_low;
        if ( !NtCurrentTeb()->ResourceRetValue )
        {
          v85 = NtCurrentTeb();
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 24LL);
          v85->ResourceRetValue = (void *)Heap;
        }
        if ( NtCurrentTeb()->ResourceRetValue )
        {
          v29 = v68;
          *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v68;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v75;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v29;
        }
        v30 = 0;
        v63 = 0;
        v5 = v93;
        v26 = v65;
        goto LABEL_57;
      }
    }
    else
    {
      v27 = v5 & 2;
    }
    if ( v20 && v27 )
    {
      v31 = v69;
      *v69 = v20;
      v30 = 0;
      v63 = 0;
      v26 = v65;
      goto LABEL_58;
    }
    v26 = v65;
    if ( v65 - v70 == 1 )
    {
      v30 = -1073741686;
      v63 = -1073741686;
      goto LABEL_57;
    }
    if ( v65 - v70 == 2 )
    {
      v30 = -1073741685;
      v63 = -1073741685;
      goto LABEL_57;
    }
    if ( v65 - v70 != 3 )
    {
      v30 = -1073741811;
      v63 = -1073741811;
      goto LABEL_57;
    }
    v30 = -1073741308;
    v63 = -1073741308;
    if ( v74 )
    {
      v75 = 0LL;
      while ( 1 )
      {
LABEL_80:
        v34 = v67++;
        if ( v34 > 6 )
        {
          v44 = v34 - 7;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( !v45 )
            {
              v61[0] = v66;
              if ( (~v5 & 0x80000) == 0 )
              {
                if ( NtCurrentTeb() )
                {
                  v49 = NtCurrentTeb();
                  CurrentLocale_low = LOWORD(v49->CurrentLocale);
                  v61[0] = v49->CurrentLocale;
                }
                v5 = v93;
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
                  v93 = v5;
                  goto LABEL_155;
                }
                v39 = 1033;
              }
              else
              {
                v61[0] = v66;
                v63 = ZwQueryDefaultLocale(0LL, &v77, 1023LL);
                if ( v63 < 0 )
                  goto LABEL_155;
                v39 = v77;
                if ( v77 == v73 )
                  goto LABEL_155;
              }
            }
            else
            {
              v61[0] = v66;
              LOBYTE(CurrentLocale_low) = 1;
              v63 = ZwQueryDefaultLocale(CurrentLocale_low, &v73, 1023LL);
              if ( v63 < 0 )
                goto LABEL_155;
              v39 = v73;
            }
          }
          else
          {
            if ( (~v5 & 0x80000) == 0 )
              goto LABEL_153;
            v50 = sub_180018940(v68, v23, 0, 1);
            if ( !v50 )
              goto LABEL_153;
            if ( *v50 != -20054323 )
              goto LABEL_153;
            if ( !v50[31] )
              goto LABEL_153;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v50 + (unsigned int)v50[31]));
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v78) )
              goto LABEL_153;
            v39 = v78;
          }
        }
        else
        {
          if ( v34 == 6 )
          {
            v61[0] = v66;
            if ( (v5 & 0x20) != 0 )
              goto LABEL_155;
            v61[0] = 0;
            if ( sub_180013968() )
            {
              CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v71 >= (unsigned int)CurrentLocale_low )
                v61[0] = 0;
              else
                sub_1800136CC(CurrentLocale_low, (__int64)NtCurrentTeb()->MergedPrefLanguages, v71, v61, &v72);
              v5 = v93;
            }
            else
            {
              v61[0] = 0;
            }
            if ( v61[0] )
            {
              ++v71;
LABEL_128:
              --v67;
              goto LABEL_155;
            }
            goto LABEL_153;
          }
          if ( !v34 )
          {
            if ( !v64 )
            {
LABEL_98:
              v61[0] = 0;
              goto LABEL_155;
            }
            v39 = v66;
            if ( (v5 & 0x80000) != 0 )
              v39 = v64;
            goto LABEL_154;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            v40 = ~v5;
            if ( (~v5 & 0x80000) != 0 && (v40 & 0x20000) != 0 && (v40 & 0x10) != 0 )
            {
              v89 = *(const wchar_t **)a2;
              if ( v26 < 2 )
                v41 = 0LL;
              else
                v41 = *(_QWORD *)(a2 + 8);
              v90 = v41;
              if ( v26 == 3 )
                v42 = *(_QWORD *)(a2 + 16);
              else
                v42 = 0LL;
              v91 = v42;
              if ( a3 == 4 )
                v92 = *(_QWORD *)(a2 + 24);
              v43 = sub_1800173F0(v68, (__int64)&v89, a3, v5, v69);
              v63 = v43;
              if ( v43 >= 0 )
              {
                sub_18000A590(v68, 0LL, (__int64 *)&v89, a3);
                return (unsigned int)v43;
              }
            }
LABEL_153:
            v39 = v66;
            goto LABEL_154;
          }
          v36 = v35 - 1;
          if ( !v36 )
          {
            v39 = v64;
            if ( v62 )
              v39 = v66;
            goto LABEL_154;
          }
          v37 = v36 - 1;
          if ( !v37 )
          {
            if ( (v5 & 4) != 0 )
              return 3221225988LL;
            if ( !v62 )
            {
              if ( (int)sub_18007E254(v61[0], v61, 1023LL) < 0 )
                goto LABEL_98;
              if ( !v61[0] )
                goto LABEL_155;
              goto LABEL_128;
            }
            goto LABEL_153;
          }
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 != 1 )
              return 3221225988LL;
            if ( !v62 )
              return 3221225988LL;
            goto LABEL_153;
          }
          if ( v62 )
            goto LABEL_153;
          v39 = v64 & 0x3FF;
        }
LABEL_154:
        v61[0] = v39;
LABEL_155:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v61[0] != v66 )
        {
          v66 = v61[0];
          v7 = &v66;
          v87 = &v66;
          v20 = v74;
          v76 = v74;
          goto LABEL_158;
        }
      }
    }
LABEL_57:
    v31 = v69;
LABEL_58:
    if ( (v5 & 0x2040000) != 0 || (unsigned int)(v30 + 1073741686) > 1 || v26 != 3 )
    {
      v32 = v68;
    }
    else
    {
      v89 = *(const wchar_t **)a2;
      v90 = *(_QWORD *)(a2 + 8);
      v91 = *(_QWORD *)(a2 + 16);
      if ( a3 == 4 )
        v92 = *(_QWORD *)(a2 + 24);
      v32 = v68;
      v33 = sub_1800173F0(v68, (__int64)&v89, a3, v5 | 0x1000000, v31);
      if ( v33 != -1073020927 )
      {
        if ( v33 != -1073020922 )
          v30 = v33;
        v63 = v30;
      }
    }
    if ( (unsigned int)(v30 + 1073741686) <= 1 )
    {
      v60 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v60 & 0x20000) != 0 && (v60 & 0x10) != 0 && v26 == 3 )
      {
        v89 = *(const wchar_t **)a2;
        v90 = *(_QWORD *)(a2 + 8);
        v91 = *(_QWORD *)(a2 + 16);
        if ( a3 == 4 )
          v92 = *(_QWORD *)(a2 + 24);
        v30 = sub_1800173F0(v32, (__int64)&v89, a3, v5, v69);
        v63 = v30;
        if ( v30 >= 0 )
          sub_18000A590(v32, 0LL, (__int64 *)&v89, a3);
      }
    }
    return (unsigned int)v30;
  }
  return result;
}
