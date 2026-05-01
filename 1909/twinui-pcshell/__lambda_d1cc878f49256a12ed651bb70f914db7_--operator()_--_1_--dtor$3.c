/*
 * XREFs of __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$3 @ 0x1802D728A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor_3(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 224),
    (struct IServiceProvider *)a2,
    a3);
}
