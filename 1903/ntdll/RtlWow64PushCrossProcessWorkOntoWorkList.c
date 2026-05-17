/*
 * XREFs of RtlWow64PushCrossProcessWorkOntoWorkList @ 0x1800FC910
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

char __fastcall RtlWow64PushCrossProcessWorkOntoWorkList(volatile signed __int64 *a1, char *a2, _QWORD *a3)
{
  unsigned int v6; // edx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  char v12; // [rsp+20h] [rbp-B8h]
  char v13; // [rsp+21h] [rbp-B7h]
  signed __int64 v14; // [rsp+28h] [rbp-B0h]
  char *v15; // [rsp+30h] [rbp-A8h]
  char *v16; // [rsp+38h] [rbp-A0h]
  signed __int64 i; // [rsp+48h] [rbp-90h]
  __int64 v18; // [rsp+50h] [rbp-88h]
  _BYTE v19[40]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v20; // [rsp+80h] [rbp-58h]
  signed __int64 v21; // [rsp+88h] [rbp-50h]
  int v22; // [rsp+98h] [rbp-40h]
  int v23; // [rsp+9Ch] [rbp-3Ch]
  unsigned __int64 v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+A8h] [rbp-30h]

  memset(v19, 0, sizeof(v19));
  v12 = 0;
  v15 = 0LL;
  v13 = 0;
  for ( i = *a1; ; i = v9 )
  {
    LODWORD(v14) = i;
    if ( (int)i >= 0 )
    {
      v6 = i & 0x7FFFFFFF;
      if ( *((_DWORD *)a2 + 1) == 8 )
      {
        if ( v6 )
        {
          if ( *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2) >= *((_QWORD *)a2 + 1) )
          {
            v18 = *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2);
            v15 = (char *)a1 + v6;
            v23 = *((_DWORD *)v15 + 1);
            if ( v23 == 8 )
            {
              v7 = *((_QWORD *)v15 + 1);
              v24 = v7;
              v8 = *((_QWORD *)v15 + 2);
              v25 = v8;
              if ( v8 + v7 >= v7 )
              {
                v20 = v8 + v7;
                if ( *((_QWORD *)a2 + 1) == v8 + v7 )
                {
                  if ( !v13 )
                  {
                    *(_OWORD *)v19 = *(_OWORD *)a2;
                    *(_OWORD *)&v19[16] = *((_OWORD *)a2 + 1);
                    *(_QWORD *)&v19[32] = *((_QWORD *)a2 + 4);
                    v13 = 1;
                  }
                  v22 = *(_DWORD *)v15;
                  *(_DWORD *)a2 = v22;
                  *((_QWORD *)a2 + 1) = v7;
                  *((_QWORD *)a2 + 2) = v18 - v7;
                  v12 = 1;
                }
              }
            }
          }
        }
      }
      if ( v12 )
      {
        v16 = v15;
      }
      else
      {
        *(_DWORD *)a2 = i & 0x7FFFFFFF;
        v16 = 0LL;
      }
      LODWORD(v14) = (((_DWORD)a2 - (_DWORD)a1) ^ i) & 0x7FFFFFFF ^ i;
    }
    else
    {
      v16 = a2;
    }
    v10 = i;
    HIDWORD(v14) = HIDWORD(i) + 1;
    v9 = _InterlockedCompareExchange64(a1, v14, i);
    v21 = v9;
    if ( v10 == v9 )
      break;
    if ( v12 )
    {
      *(_OWORD *)a2 = *(_OWORD *)v19;
      *((_OWORD *)a2 + 1) = *(_OWORD *)&v19[16];
      *((_QWORD *)a2 + 4) = *(_QWORD *)&v19[32];
      v12 = 0;
    }
  }
  *a3 = v16;
  return 1;
}
