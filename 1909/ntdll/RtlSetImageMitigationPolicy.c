/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800E0C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x18009DA80 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E1C88 (RtlpDeleteEmptyImageFileOptionsKey.c)
 */

__int64 __fastcall RtlSetImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  int v5; // r14d
  char v6; // si
  const wchar_t *v10; // rdx
  int v11; // r12d
  int inited; // ebx
  int v13; // eax
  int ValueKey; // eax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r9d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r10
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // r9d
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  int v67; // edi
  int v68; // edi
  int v69; // edi
  int v70; // edi
  int v71; // edi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // r8
  unsigned __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r8
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // r9
  __int64 v108; // r10
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // r9
  unsigned __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // r10
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-79h] BYREF
  char v124[16]; // [rsp+48h] [rbp-71h] BYREF
  char v125[16]; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int16 v126[8]; // [rsp+70h] [rbp-49h] BYREF
  int v127; // [rsp+80h] [rbp-39h]
  __int64 v128; // [rsp+88h] [rbp-31h]
  void *v129; // [rsp+90h] [rbp-29h]
  int v130; // [rsp+98h] [rbp-21h]
  __int128 v131; // [rsp+A0h] [rbp-19h]
  unsigned __int64 v132; // [rsp+B0h] [rbp-9h] BYREF
  unsigned __int64 v133; // [rsp+B8h] [rbp-1h]
  unsigned int Size; // [rsp+C8h] [rbp+Fh]
  size_t Size_4; // [rsp+CCh] [rbp+13h] BYREF

  Handle = 0LL;
  v132 = 0LL;
  v5 = a3 & 2;
  v133 = 0LL;
  v6 = a3 & 1;
  v10 = L"MitigationOptions";
  v11 = a3 & 8;
  if ( (a3 & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx((__int64)v124, (__int64)v10);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx((__int64)v125, (__int64)L"EAFModules");
    if ( inited >= 0 )
    {
      if ( (v6 || v5) && (a5 || a4) )
        goto LABEL_257;
      inited = RtlInitUnicodeStringEx((__int64)v126, a1);
      if ( inited < 0 )
        goto LABEL_260;
      if ( a1 )
      {
        v13 = RtlpOpenImageFileOptionsKeyEx(v126, 131087LL, v5 == 0, &Handle);
      }
      else
      {
        v128 = 0LL;
        v129 = &unk_180118AF8;
        v127 = 48;
        v130 = 576;
        v131 = 0LL;
        v13 = NtOpenKey();
      }
      inited = v13;
      if ( v13 < 0 )
        goto LABEL_258;
      ValueKey = NtQueryValueKey();
      inited = ValueKey;
      if ( ValueKey >= 0 )
      {
        if ( Size > 0x10 )
        {
          inited = -1073741788;
          goto LABEL_258;
        }
        memmove(&v132, &Size_4, Size);
      }
      else if ( ValueKey != -1073741772 )
      {
        goto LABEL_258;
      }
      if ( a2 > 8 )
      {
        v67 = a2 - 9;
        if ( !v67 )
        {
          if ( v6 )
          {
            v30 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_243;
          }
          if ( a5 == 8 )
          {
            v120 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
              {
                v121 = v120 != 0 ? 6LL : 2LL;
              }
              else if ( (*(_BYTE *)a4 & 8) != 0 )
              {
                v121 = v120 != 0 ? 7LL : 3LL;
              }
              else
              {
                v121 = v120 != 0 ? 5LL : 1LL;
              }
              v32 = v121 << 48;
            }
            else
            {
              v32 = -(__int64)(v120 != 0) & 0x4000000000000LL;
            }
            v33 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_254;
          }
          goto LABEL_257;
        }
        v68 = v67 - 1;
        if ( !v68 )
        {
          if ( v6 )
          {
            v132 &= 0xFFFFFFFFFFFFFuLL;
            goto LABEL_256;
          }
          if ( a5 != 24 )
            goto LABEL_257;
          v107 = a4[1];
          v108 = a4[2];
          v109 = *a4 & 4LL;
          v110 = v107 & 4;
          v111 = v108 & 4;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
              v113 = (((unsigned __int128)-(__int128)(unsigned __int64)v109 >> 64) & 4) + 2;
            else
              v113 = (((unsigned __int128)-(__int128)(unsigned __int64)v109 >> 64) & 4) + 1;
            v112 = v113 << 52;
          }
          else
          {
            v112 = -(__int64)(v109 != 0) & 0x40000000000000LL;
          }
          v114 = v107 & 3;
          v115 = v132 & 0xF00FFFFFFFFFFFFFuLL | v112 & 0xF0FFFFFFFFFFFFFFuLL;
          if ( v114 )
          {
            if ( v114 == 2 )
              v117 = v110 != 0 ? 6LL : 2LL;
            else
              v117 = v110 != 0 ? 5LL : 1LL;
            v116 = v117 << 56;
          }
          else
          {
            v116 = -(__int64)(v110 != 0) & 0x400000000000000LL;
          }
          v53 = (v115 | v116) & 0xFFFFFFFFFFFFFFFLL;
          v118 = v108 & 3;
          if ( v118 )
          {
            if ( v118 == 2 )
              v119 = v111 != 0 ? 6LL : 2LL;
            else
              v119 = v111 != 0 ? 5LL : 1LL;
            v54 = v119 << 60;
          }
          else
          {
            v54 = -(__int64)(v111 != 0) & 0x4000000000000000LL;
          }
          goto LABEL_107;
        }
        v69 = v68 - 1;
        if ( !v69 )
        {
          if ( v6 )
          {
            v133 &= 0xFFFFF0F00000FFFFuLL;
            if ( !v11 )
              ZwDeleteValueKey();
            goto LABEL_256;
          }
          if ( a5 == 1072 )
          {
            if ( v11 || (inited = ZwSetValueKey(), inited >= 0) )
            {
              v76 = a4[3] & 4LL;
              if ( (a4[3] & 3) != 0 )
              {
                if ( (a4[3] & 3LL) == 2 )
                  v78 = v76 != 0 ? 6LL : 2LL;
                else
                  v78 = v76 != 0 ? 5LL : 1LL;
                v77 = v78 << 16;
              }
              else
              {
                v77 = v76 != 0 ? 0x40000 : 0;
              }
              v79 = a4[4] & 4LL;
              v80 = a4[4] & 3LL;
              v81 = v133 & 0xFFFFFFFFFF00FFFFuLL | v77 & 0xFFFFFFFFFF0FFFFFuLL;
              if ( v80 )
              {
                if ( v80 == 2 )
                  v83 = v79 != 0 ? 6LL : 2LL;
                else
                  v83 = v79 != 0 ? 5LL : 1LL;
                v82 = v83 << 20;
              }
              else
              {
                v82 = v79 != 0 ? 0x400000 : 0;
              }
              v84 = (v81 | v82) & 0xFFFFFFFFF0FFFFFFuLL;
              v85 = a4[5] & 4LL;
              v86 = a4[5] & 3LL;
              if ( v86 )
              {
                if ( v86 == 2 )
                  v88 = v85 != 0 ? 6LL : 2LL;
                else
                  v88 = v85 != 0 ? 5LL : 1LL;
                v87 = v88 << 24;
              }
              else
              {
                v87 = v85 != 0 ? 0x4000000 : 0;
              }
              v89 = v84 | v87;
              v90 = *a4 & 4LL;
              v91 = *a4 & 3LL;
              v92 = v89 & 0xFFFFFFFF0FFFFFFFuLL;
              if ( v91 )
              {
                if ( v91 == 2 )
                  v94 = v90 != 0 ? 6LL : 2LL;
                else
                  v94 = v90 != 0 ? 5LL : 1LL;
                v93 = v94 << 28;
              }
              else
              {
                v93 = v90 != 0 ? 0x40000000 : 0;
              }
              v95 = v92 | v93;
              v96 = a4[1] & 4LL;
              v97 = a4[1] & 3LL;
              v98 = v95 & 0xFFFFFFF0FFFFFFFFuLL;
              if ( v97 )
              {
                if ( v97 == 2 )
                  v100 = v96 != 0 ? 6LL : 2LL;
                else
                  v100 = v96 != 0 ? 5LL : 1LL;
                v99 = v100 << 32;
              }
              else
              {
                v99 = -(__int64)(v96 != 0) & 0x400000000LL;
              }
              v101 = v98 | v99;
              v102 = a4[2] & 4LL;
              v103 = a4[2] & 3LL;
              v104 = v101 & 0xFFFFF0FFFFFFFFFFuLL;
              if ( v103 )
              {
                if ( v103 == 2 )
                  v106 = v102 != 0 ? 6LL : 2LL;
                else
                  v106 = v102 != 0 ? 5LL : 1LL;
                v105 = v106 << 40;
              }
              else
              {
                v105 = -(__int64)(v102 != 0) & 0x40000000000LL;
              }
              v133 = v104 | v105;
              goto LABEL_256;
            }
LABEL_258:
            if ( Handle )
              NtClose(Handle);
            goto LABEL_260;
          }
          goto LABEL_257;
        }
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( v71 )
          {
            if ( v71 != 1 )
              goto LABEL_258;
            if ( v6 )
            {
              v132 &= 0xFFFFFFFFFFFF0FFFuLL;
              goto LABEL_256;
            }
            if ( a5 == 8 )
            {
              v72 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                  v32 = v72 != 0 ? 24576LL : 0x2000LL;
                else
                  v32 = v72 != 0 ? 20480LL : 4096LL;
              }
              else
              {
                v32 = v72 != 0 ? 0x4000 : 0;
              }
              v38 = v132 & 0xFFFFFFFFFFFF0FFFuLL;
              goto LABEL_255;
            }
          }
          else
          {
            if ( v6 )
            {
              v132 &= 0xFFFFFFFFFFFFFF0FuLL;
              goto LABEL_256;
            }
            if ( a5 == 8 )
            {
              v73 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                {
                  v32 = v73 != 0 ? 96LL : 32LL;
                }
                else if ( (*(_BYTE *)a4 & 8) != 0 )
                {
                  v32 = v73 != 0 ? 112LL : 48LL;
                }
                else
                {
                  v32 = v73 != 0 ? 80LL : 16LL;
                }
              }
              else
              {
                v32 = v73 != 0 ? 0x40 : 0;
              }
              v38 = v132 & 0xFFFFFFFFFFFFFF0FuLL;
              goto LABEL_255;
            }
          }
          goto LABEL_257;
        }
        if ( v6 )
        {
          v133 &= 0xFFFFFF0FFFFFFFFFuLL;
          goto LABEL_256;
        }
        if ( a5 != 8 )
          goto LABEL_257;
        v74 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) != 2 )
          {
            v66 = 0xFFFFFF0FFFFFFFFFuLL;
            if ( (*(_BYTE *)a4 & 8) != 0 )
              v75 = v74 != 0 ? 7LL : 3LL;
            else
              v75 = v74 != 0 ? 5LL : 1LL;
            v25 = v75 << 36;
            goto LABEL_137;
          }
          v25 = (v74 != 0 ? 6LL : 2LL) << 36;
        }
        else
        {
          v25 = -(__int64)(v74 != 0) & 0x4000000000LL;
        }
        v66 = 0xFFFFFF0FFFFFFFFFuLL;
      }
      else
      {
        if ( a2 != 8 )
        {
          if ( !a2 )
          {
            if ( v6 )
            {
              v132 &= 0xFFFFFFFFFFFFFFF0uLL;
              goto LABEL_256;
            }
            if ( a5 == 8 )
            {
              v56 = *a4 & 4LL;
              if ( (*a4 & 3) != 0 )
              {
                if ( (*a4 & 3LL) == 2 )
                {
                  v32 = v56 != 0 ? 6LL : 2LL;
                }
                else if ( (*(_BYTE *)a4 & 8) != 0 )
                {
                  v32 = v56 != 0 ? 7LL : 3LL;
                }
                else
                {
                  v32 = v56 != 0 ? 5LL : 1LL;
                }
              }
              else
              {
                v32 = v56 != 0 ? 4 : 0;
              }
              v38 = v132 & 0xFFFFFFFFFFFFFFF0uLL;
              goto LABEL_255;
            }
            goto LABEL_257;
          }
          v15 = a2 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  v19 = v18 - 2;
                  if ( v19 )
                  {
                    if ( v19 != 1 )
                      goto LABEL_258;
                    if ( v6 )
                    {
                      v132 &= 0xFFFFF0FFFFFFFFFFuLL;
                      v133 &= 0xFFFFFFFFFFFFF0FFuLL;
LABEL_256:
                      inited = ZwSetValueKey();
                      goto LABEL_258;
                    }
                    if ( a5 == 16 )
                    {
                      v20 = a4[1];
                      v21 = v20 & 4;
                      v22 = *a4 & 4LL;
                      if ( (*a4 & 3) != 0 )
                      {
                        if ( (*a4 & 3LL) == 2 )
                        {
                          v26 = v132 & 0xFFFFF0FFFFFFFFFFuLL | ((v22 != 0 ? 6LL : 2LL) << 40);
                          v24 = v133;
                          v132 = v26;
                          v25 = v21 != 0 ? 1536LL : 512LL;
                          goto LABEL_44;
                        }
                        if ( (*(_BYTE *)a4 & 8) != 0 )
                          v27 = v22 != 0 ? 7LL : 3LL;
                        else
                          v27 = v22 != 0 ? 5LL : 1LL;
                        v24 = v133;
                        v132 = v132 & 0xFFFFF0FFFFFFFFFFuLL | (v27 << 40);
                        v28 = v20 & 3;
                        if ( v28 )
                        {
                          if ( v28 != 2LL )
                          {
                            v25 = v21 != 0 ? 1280LL : 256LL;
                            goto LABEL_44;
                          }
                          goto LABEL_34;
                        }
                      }
                      else
                      {
                        v23 = v132 & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v22 != 0) & 0x40000000000LL;
                        v24 = v133;
                        v132 = v23;
                        if ( (v20 & 3) == 2 )
                        {
LABEL_34:
                          v25 = v21 != 0 ? 1536LL : 512LL;
LABEL_44:
                          v29 = v24 & 0xFFFFFFFFFFFFF0FFuLL;
LABEL_138:
                          v133 = v29 | v25;
                          goto LABEL_256;
                        }
                      }
                      v25 = v21 != 0 ? 0x400 : 0;
                      goto LABEL_44;
                    }
                    goto LABEL_257;
                  }
                  if ( v6 )
                  {
                    v30 = 0xFFFFFFF0FFFFFFFFuLL;
LABEL_243:
                    v132 &= v30;
                    goto LABEL_256;
                  }
                  if ( a5 == 8 )
                  {
                    v31 = *a4 & 4LL;
                    if ( (*a4 & 3) != 0 )
                    {
                      v33 = 0xFFFFFFF0FFFFFFFFuLL;
                      if ( (*a4 & 3LL) == 2 )
                        v34 = v31 != 0 ? 6LL : 2LL;
                      else
                        v34 = v31 != 0 ? 5LL : 1LL;
                      v32 = v34 << 32;
                    }
                    else
                    {
                      v32 = -(__int64)(v31 != 0) & 0x400000000LL;
                      v33 = 0xFFFFFFF0FFFFFFFFuLL;
                    }
                    goto LABEL_254;
                  }
                }
                else
                {
                  if ( v6 )
                  {
                    v30 = 0xFFFFFFFF0FFFFFFFuLL;
                    goto LABEL_243;
                  }
                  if ( a5 == 8 )
                  {
                    v33 = 0xFFFFFFFF0FFFFFFFuLL;
                    v35 = *a4 & 4LL;
                    if ( (*a4 & 3) != 0 )
                    {
                      if ( (*a4 & 3LL) == 2 )
                        v36 = v35 != 0 ? 6LL : 2LL;
                      else
                        v36 = v35 != 0 ? 5LL : 1LL;
                      v32 = v36 << 28;
                    }
                    else
                    {
                      v32 = v35 != 0 ? 0x40000000 : 0;
                    }
                    goto LABEL_254;
                  }
                }
              }
              else
              {
                if ( v6 )
                {
                  v132 &= 0xFFFFFFFFF0FFFFFFuLL;
                  goto LABEL_256;
                }
                if ( a5 == 8 )
                {
                  v37 = *a4 & 4LL;
                  if ( (*a4 & 3) != 0 )
                  {
                    if ( (*a4 & 3LL) == 2 )
                      v39 = v37 != 0 ? 6LL : 2LL;
                    else
                      v39 = v37 != 0 ? 5LL : 1LL;
                    v32 = v39 << 24;
                  }
                  else
                  {
                    v32 = v37 != 0 ? 0x4000000 : 0;
                  }
                  v38 = v132 & 0xFFFFFFFFF0FFFFFFuLL;
                  goto LABEL_255;
                }
              }
            }
            else
            {
              if ( v6 )
              {
                v30 = 0xFFFFFF0FFFFFFFFFuLL;
                goto LABEL_243;
              }
              if ( a5 == 8 )
              {
                v40 = *a4 & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  if ( (*a4 & 3LL) != 2 )
                  {
                    v33 = 0xFFFFFF0FFFFFFFFFuLL;
                    if ( (*(_BYTE *)a4 & 8) != 0 )
                      v41 = v40 != 0 ? 7LL : 3LL;
                    else
                      v41 = v40 != 0 ? 5LL : 1LL;
                    v32 = v41 << 36;
                    goto LABEL_254;
                  }
                  v32 = (v40 != 0 ? 6LL : 2LL) << 36;
                }
                else
                {
                  v32 = -(__int64)(v40 != 0) & 0x4000000000LL;
                }
                v33 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_254:
                v38 = v33 & v132;
LABEL_255:
                v132 = v38 | v32;
                goto LABEL_256;
              }
            }
LABEL_257:
            inited = -1073741811;
            goto LABEL_258;
          }
          if ( v6 )
          {
            v132 &= 0xFFFFFFFFFF00F0FFuLL;
            goto LABEL_256;
          }
          if ( a5 != 24 )
            goto LABEL_257;
          v42 = a4[1];
          v43 = a4[2];
          v44 = v42 & 4;
          v45 = v43 & 4;
          v46 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 512;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 768;
            }
            else
            {
              v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 256;
            }
          }
          else
          {
            v47 = ((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400;
          }
          v48 = v42 & 3;
          v49 = v132 & 0xFFFFFFFFFFF0F0FFuLL | v47 & 0xFFFFFFFFFFF0FFFFuLL;
          if ( v48 )
          {
            if ( v48 == 2 )
              v51 = v44 != 0 ? 6LL : 2LL;
            else
              v51 = v44 != 0 ? 5LL : 1LL;
            v50 = v51 << 16;
          }
          else
          {
            v50 = v44 != 0 ? 0x40000 : 0;
          }
          v52 = v43 & 3;
          v53 = (v49 | v50) & 0xFFFFFFFFFF0FFFFFuLL;
          if ( v52 )
          {
            if ( v52 == 2 )
              v55 = v45 != 0 ? 6LL : 2LL;
            else
              v55 = v45 != 0 ? 5LL : 1LL;
            v54 = v55 << 20;
          }
          else
          {
            v54 = v45 != 0 ? 0x400000 : 0;
          }
LABEL_107:
          v132 = v53 | v54;
          goto LABEL_256;
        }
        if ( v6 )
        {
          v30 = 0xFFFF0FFFFFFFFFFFuLL;
          goto LABEL_243;
        }
        if ( a5 != 16 )
          goto LABEL_257;
        v57 = a4[1];
        v58 = v57 & 4;
        v59 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v61 = v59 != 0 ? 6LL : 2LL;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v61 = v59 != 0 ? 7LL : 3LL;
          }
          else
          {
            v61 = v59 != 0 ? 5LL : 1LL;
          }
          v60 = v61 << 44;
        }
        else
        {
          v60 = -(__int64)(v59 != 0) & 0x400000000000LL;
        }
        v132 = v132 & 0xFFFF0FFFFFFFFFFFuLL | v60;
        v62 = v57 & 3;
        if ( v62 )
        {
          if ( v62 == 2LL )
          {
            v63 = (v58 != 0 ? 6LL : 2LL) << 44;
            v65 = v58 != 0 ? 96LL : 32LL;
          }
          else
          {
            v63 = (v58 != 0 ? 5LL : 1LL) << 44;
            v65 = v58 != 0 ? 80LL : 16LL;
          }
          v64 = v65 & 0xFFFF0FFFFFFFFFFFuLL;
        }
        else
        {
          v63 = v58 != 0 ? 0x40uLL : 0;
          v64 = -(__int64)(v58 != 0) & 0x400000000000LL;
        }
        v25 = v64 | v63;
        v66 = 0xFFFF0FFFFFFFFF0FuLL;
      }
LABEL_137:
      v29 = v66 & v133;
      goto LABEL_138;
    }
  }
LABEL_260:
  if ( inited == -1073741772 && v5 )
    return 0;
  return (unsigned int)inited;
}
